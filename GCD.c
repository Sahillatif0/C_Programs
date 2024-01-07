#include <stdio.h>
int main(){
    int num1, num2, GCD=1, smaller;
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);
    smaller = num1;
    if(num1>num2)
        smaller = num2;
    for(int i = 2; smaller>=i; i++)
        if(num1%i==0 && num2%i==0)
            GCD = i;
    printf("GCD of %d and %d: %d", num1, num2, GCD);
}