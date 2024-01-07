#include<stdio.h>
int main(){
    int num[3][3],i,j, sum[3]={0}, maxSum=0, row;
    printf("Enter array: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &num[i][j]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            sum[i]+=num[i][j];
        if(sum[i]>maxSum){
            maxSum = sum[i];
            row = i;
        }
    }
    printf("Maximum Sum = %d Row = %d\n", maxSum,row);
    for(i=0;i<3;i++){
        if(i!=row){
        for(j=0;j<3;j++)
            num[i][j] = maxSum;
        }
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            printf("%d ", num[i][j]);
    return 0;
}