#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char dN[10][10] = {"Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char eN[10][12] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Ninteen"};
char tN[8][12] = {"Twenty", "Thirty", "Fourty", "Fifty","Sixty", "Seventy","Eighty","Nighty"};
char hN[2][12] = {"Hundred ", "Thousand "};

char* calculate(int);

char* onceTense(int num){
    if(num/10==0)
        return dN[num];
    return eN[num%10];
}
char* tense(int num){
    char *value = (char*) malloc(50);
    strcpy(value,tN[(num/10)-2]);
    strcat(value," ");
    if(num%10!=0)
        strcat(value, calculate(num%10));
    return value;
}
char* hundredth(int num){
    char *value = (char*) malloc(50);
    strcpy(value,onceTense(num/100));
    strcat(value," ");
    strcat(value,hN[0]);
    if(num%100!=0)
        strcat(value,calculate(num%100));
    return value;
}
char* thousand(int num){
    char *value = (char*) malloc(100);
    strcpy(value,calculate(num/1000));
    strcat(value," ");
    strcat(value,hN[1]);
    if(num%1000!=0)
    strcat(value,calculate(num%1000));
    return value;
}
char* calculate(int num){
    char *value = (char*) malloc(100);
    if(num/10<2)
        strcpy(value,onceTense(num));
    else if(num/10>=2 && num/10<10)
        strcpy(value,tense(num));        
    else if(num/100>0 && num/100<10)
        strcpy(value,hundredth(num));
    else
        strcpy(value,thousand(num));
    return value;
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    char numStr[100];
    strcpy(numStr,calculate(num));
    printf("%s\n", numStr);
}