#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,m,sorted=1,nSize;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = (int*) malloc(n*sizeof(int));
    printf("Enter %d elements of array: ",n);
    for(i=0;i<n;i++)
        scanf("%d", arr+i);
    printf("Enter how many more elements more you want: ");
    scanf("%d", &m);
    nSize = n+m;
    arr = realloc(arr, (nSize)*sizeof(int));

    printf("Enter more elements: ");
    for(i=n;i<nSize;i++)
        scanf("%d", arr+i);
    while(sorted){
        sorted = 0;
        for(i=0;i<nSize-1;i++){
            if((*(arr+i))>(*(arr+i+1))){
                int temp = (*(arr+i));
                (*(arr+i)) = (*(arr+i+1));
                (*(arr+i+1)) = temp;
                sorted = 1;
            }            
        }
    }
    
    for(i=0;i<nSize;i++)
        printf("%d ", *(arr+i));
    return 0;
}