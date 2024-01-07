#include<stdio.h>
int main(){
    float num[20], max, smax;
    int i;
    printf("Enter elements: ");
    for(i=0;i<5;i++){
        scanf("%f", num+i);
    }
    max = *num;
    smax = *num;
    for(i=0;i<5;i++){
        if(*(num+i)>max){
            smax = max;
            max = *(num+i);
        }
    }
    printf("Second Max number: %.2f",smax);
    return 0;
}