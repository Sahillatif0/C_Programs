#include <stdio.h>
int main(){
    int decimal, remainder, rBinary = 1, binary=1, counter=0, loop=0;
    printf("Enter number in decimal to convert it into Binary: ");
    scanf("%d", &decimal);
    while(decimal!=1){
    counter++;
    remainder = decimal%2;
    decimal = decimal/2;
    rBinary *= 10;
    rBinary+=remainder;
    }
    while (loop<counter)
    {
        loop++;
        remainder = rBinary%10;
        rBinary /= 10;
        binary *= 10;
        binary+=remainder;
    }
    
    printf("binary = %d", binary);
}