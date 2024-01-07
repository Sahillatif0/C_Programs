#include<stdio.h>
int main(){
    int start, end, fizz=0, buzz=0, fizzbuzz=0;
    printf("enter start limit: ");
    scanf("%d", &start);
    printf("enter end limit: ");
    scanf("%d", &end);
    for(int i = start; i<=end;i++){
        if(i%3==0 && i%5==0)
            fizzbuzz++;
        if(i%3==0)
            fizz++;
        if(i%5==0)
            buzz++;
    }
    printf("Fizz = %d\nBuzz = %d\nFizz-Buzz = %d", fizz, buzz, fizzbuzz);
    return 0;
}