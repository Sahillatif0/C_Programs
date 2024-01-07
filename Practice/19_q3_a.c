#include<stdio.h>
int main(){
    int a=10,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ", a);
            if(j==0)
                a+=3;
            else
                a+=a;
        }
    }
    return 0;
}