#include<stdio.h>
int main(){
    int m;
    printf("Enter array size: ");
    scanf("%d", &m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d", &arr[i]);
    }
    for(int j=2;j<m;j++){
        int key = arr[j];
        int i = j-1;
        while (i>0 && arr[i]>key)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
    for(int i=0;i<m;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}