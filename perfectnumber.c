#include<stdio.h>
int main(){
    int num, factorSum=0;
    printf("enter the number: ");
    scanf("%d", &num);
    for(int i=1; i<num;i++)
        if(num%i==0)
            factorSum+=i;
    if(factorSum==num)
        printf("The number %d is a perfect number", num);
    else
        printf("The number %d is not a perfect number", num);
    return 0;
}