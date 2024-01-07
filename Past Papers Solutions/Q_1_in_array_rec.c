#include<stdio.h>
#include<stdlib.h>
int calculate(int **arr,int ind,int m,int n){
    int total = m*n;
    int count=0;
    if(arr[ind/n][ind%n]==1)
        count=1;
    if(ind==total-1)
        return count;
    else
        return count+calculate(arr, ind+1,m,n);
}
void input(int **arr,int ind,int m, int n){
    int total = m*n;
    if(ind%n==0)
        arr[ind/n] = (int *) calloc(n,sizeof(int));
    scanf("%d",&arr[ind/n][ind%n]);
    if(ind==total-1)
        return;
    input(arr,ind+1,m,n);
}
int main(){
    int m,n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of coloums: ");
    scanf("%d", &n);
    int **arr = (int**) malloc(m*sizeof(int*));
    printf("Enter array: \n");
    input(arr,0,m,n);
    int count = calculate(arr,0,m,n);
    printf("%d", count);
    return 0;
}