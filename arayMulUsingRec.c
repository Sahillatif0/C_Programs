#include<stdio.h>
#include<stdlib.h>
void recurMul(int** m1, int** m2, int** m3, int r1, int r2, int c1, int c2,int i,int j,int k){
    if(k==r2){
        j++;
        k=0;
    }
    if(j==c2){
        i++;
        j=0;
    }
    if(i==r1)
        return;
    m3[i][j] += m1[i][k]*m2[k][j];
    recurMul(m1,m2,m3,r1,r2,c1,c2,i,j,k+1);
}
int main(){
    int r1,r2,c1,c2,i,j;
    printf("Enter dimension for m1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter dimension for m2: ");
    scanf("%d %d", &r2, &c2);
    if(r2!=c1){
        printf("Matrix not possible!");
        return 1;
    }
    int** m1=(int**)calloc(r1,sizeof(int*));
    for(i=0;i<r1;i++)
        m1[i] = (int*) calloc(c1,sizeof(int));
    int** m2=(int**)calloc(r2,sizeof(int*));
    for(i=0;i<r2;i++)
        m2[i] = (int*) calloc(c2,sizeof(int));
    int** m3=(int**)calloc(r1,sizeof(int*));
    for(i=0;i<r1;i++)
        m3[i] = (int*) calloc(c2,sizeof(int));
    printf("Matrix 1: ");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&m1[i][j]);
    printf("Matrix 2: ");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&m2[i][j]);
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            m3[i][j]=0;
    recurMul(m1,m2,m3,r1,r2,c1,c2,0,0,0);
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
            printf("%d ",m3[i][j]);
        printf("\n");
    }
    free(m1);
    free(m2);
    free(m3);
    return 0;
}