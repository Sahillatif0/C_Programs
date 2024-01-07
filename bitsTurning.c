#include <stdio.h>


int main() {
    unsigned int number;
    printf("Enter the 8-bit number: ");
    scanf("%u", &number);
    if(number&(1<<2)==4 || number&(1<<4)==16){
        if(number&(1<<2)==4){
        number = number&251;
        }
        if(number&(1<<4)==16){
        number = number&239;
    }
    printf("Bits of 3rd and 5th position are turned off, new number is %u", number);
    }
    else{
        printf("Bits of 3rd and 5th position are already off.");
    }
    
}
