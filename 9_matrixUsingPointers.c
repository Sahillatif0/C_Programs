#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int **matrixA = (int**) calloc(n,sizeof(int*));
    int **matrixB = (int**) calloc(n,sizeof(int*));
    for(i=0;i<n;i++){
        *(matrixA+i) = (int*) calloc(n,sizeof(int));
        *(matrixB+i) = (int*) calloc(n,sizeof(int));
    }
    printf("Enter elements for matrix A: ");
    for(i=0;i<n;i++)        
        for(j=0;j<n;j++)
            scanf("%d",(*(matrixA+i)+j));
    for(i=0;i<n;i++)        
        for(j=0;j<n;j++)
            *(*(matrixB+i)+j) = *(*(matrixA+i)+j) + *(*(matrixA+n-i-1)+n-j-1);
    printf("Matrix A\n");
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++)
            printf("%d ",*(*(matrixA+i)+j));
        printf("\n");
    }
    printf("\nMatrix B\n");
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++)
            printf("%d ",*(*(matrixB+i)+j));
        printf("\n");
    }


    return 0;
}