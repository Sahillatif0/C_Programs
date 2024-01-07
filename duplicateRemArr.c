#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j+i+1]){
                for(int k = j+i; k<n-1;k++){
                    arr[k] = arr[k+1];
                }
                for(int i=0;i<n;i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                n--;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}