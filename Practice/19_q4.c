#include<stdio.h>
#include<stdlib.h>
void calculateSum(float* arr, float* even, float* odd,int i, int n){
    if(i%2==0)
        (*even)+=arr[i];
    else
        (*odd)+=arr[i];
    if(i<n)
        calculateSum(arr,even,odd,i+1,n);
}
int main(){
    float *arr = (float*) calloc(5,sizeof(float));
    int i,j;
    for(i=0;i<5;i++)
        scanf("%f", &arr[i]);
    float even=0,odd=0;
    calculateSum(arr,&even,&odd,0,5);
    printf("EvenSum: %.2f\nOddSum: %.2f", even,odd);
    return 0;
}