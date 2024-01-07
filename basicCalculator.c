#include <stdio.h>
int main(){
    int operation, num1, num2;
    float result;
    printf("Enter a number for operation: ");
    scanf("%d", &num1);
    printf("Enter another number for operation: ");
    scanf("%d", &num2);
    printf("Which of the following operation you want to perform?\n1. Addition\n2. Subtration of num1 from num2\n3. Subtration of num2 from num1\n4. Multiplication\n5. Division of num1 by num2\n6. Division of num2 by num1\nEnter the choice in number: ");
    scanf("%d", &operation);
    switch(operation){
        case 1: 
        printf("Addition of num1 and num2 is: %d", num1+num2);
        break;
        case 2: 
        printf("Subtraction of num1 from num2 is: %d", num2-num1);
        break;
        case 3: 
        printf("Subtraction of num2 from num1 is: %d", num1-num2);
        break;
        case 4: 
        printf("Multiplication of num1 and num2 is: %d", num1*num2);
        break;
        case 5: 
        printf("Division of num2 by num1 is: %.2f", (num2*1.0)/num1);
        break;
        case 6:
        printf("Division of num1 by num2 is: %.2f", (num1*1.0)/num2);
        break;
        default: 
        printf("Wrong Input!");

    }

}