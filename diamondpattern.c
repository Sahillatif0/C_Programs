#include<stdio.h>
int main(){
    int i,j,k,l=0,m,n, inc = 1;
    printf("Enter the size of pattern(only odd): ");
    scanf("%d", &n);
    m = n/2;
    for(i=0;i<n;i++){
        for(j=l;j<m;j++)
            printf(" ");
        printf("*");
        for(j=0;j<(l-1)*2+1;j++)
            printf(" ");
        if(l!=0)
            printf("*");
        printf("\n");
        if(l>m-1)
            inc = 0;
        if(inc)
            l++;
        else
            l--;
    }   
    return 0;
}