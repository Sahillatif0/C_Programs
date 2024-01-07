#include<stdio.h>
int main(){
    int num1, num2, smaller, hcf, lcm;
    printf("enter number 1: " );
    scanf("%d", &num1);
    printf("enter number 2: " );
    scanf("%d", &num2);
    smaller = num1<num2?num1:num2;
    for(int i=1;i<=smaller;i++)
        if(num1%i==0 && num2%i==0)
            hcf = i;
    lcm = (num1*num2)/hcf;
    printf("The HCF of %d and %d is %d, and LCM is %d", num1, num2, hcf, lcm);
    return 0;
}