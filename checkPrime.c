#include<stdio.h>
int main()
{
    // int a = 0 , b = 1,c=0;
    // for(int i=0; i<7; i++)
    // {
    // printf("%d\n",c);
    // a=b;
    // b= c;
    // c=a+b;
    // }
    while(1){
    int num, prime=1;
    printf("Enter number for checking whether it is a prime or not: ");
    scanf("%d", &num);
    if(num<0){
        printf("Negative numbers are not prime.\n");
        break;
    }
    for(int i = 2; i<num; i++)
        if(num%i==0 && num!=2){
            prime=0;
            break;
        }
    if(num==0 || num==1)
        prime=0;
    if(prime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    }
    }

