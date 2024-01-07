#include<stdio.h>
int main(){
    int arr[5] = {1,4,6,7,5};
    for(int i=0;i<4;i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}