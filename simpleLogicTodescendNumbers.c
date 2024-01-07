#include <stdio.h>
int main(){
    int num1, num2, num3, num4,num5, temp;
    printf("Enter numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2,&num3,&num4,&num5);
    while(num1<num2 || num2<num3 || num3<num4 || num4<num5){
    if(num2>num1){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if(num3>num2){
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if(num4>num3){
        temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if(num5>num4){
        temp = num5;
        num5 = num4;
        num4 = temp;
    }
    
    }
    printf("%d %d %d %d %d\n", num1, num2, num3, num4, num5);
}