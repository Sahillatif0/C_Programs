#include<stdio.h>
#include<string.h>
typedef long long int lli;
lli stringAdd(char str1[100], char str2[100]){
    int i;
    lli num1=0,num2=0;
    for(i=0;i<strlen(str1);i++){
        num1*=10;
        num1+=(int) (str1[i]) - 48;
    }
    for(i=0;i<strlen(str2);i++){
        num2*=10;
        num2+=(int) (str2[i]) - 48;
    }
    return num1+num2;
}
int main(){
    char str1[100],str2[100];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
    
    printf("%llu",stringAdd(str1,str2));
    return 0;
}