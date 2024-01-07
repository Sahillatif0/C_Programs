#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int p = 0;
        for(j=2;j<i;j++)
        {
            if(i%j==0){
                p++;
               // break;
            }
        }
        if(p==0)
            printf("%d ",i);
         
    }
    return 0;
}