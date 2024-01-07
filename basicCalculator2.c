#include <stdio.h>
int main(){
    int num1, num2;
    char operation, ddd; 
    printf("Enter operation that you want to perform: ");
    scanf("%d %c %d",&num1, &operation, &num2);
    switch(operation){
        case '+': 
        printf("Addition of num1 and num2 is: %d", num1+num2);
        break;
        case '-': 
        printf("Subtraction of num1 from num2 is: %d", num1-num2);
        break;
        case '*': 
        printf("Multiplication of num1 and num2 is: %d", num1*num2);
        break;
        case '/': 
        printf("Division of num2 by num1 is: %.2f", (num1*1.0)/num2);
        break;
        default: 
        printf("Wrong Input!");

    }

}