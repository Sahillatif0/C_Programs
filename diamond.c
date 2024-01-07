#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<6;i++){
        for(k=5;k>i;k--){
            printf(" ");
        }
        if(i>2){
            printf("* ");
            for(k=0;k<(i-2);k++){
                printf("  ");
            }
            printf("*");
        }
        else{
            for(j=0;j<i;j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    for(i=4;i>0;i--){
        for(k=5;k>i;k--){
            printf(" ");
        }
        if(i>2){
            printf("* ");
            for(k=0;k<(i-2);k++){
                printf("  ");
            }
            printf("*");
        }
        else{
            for(j=0;j<i;j++){
                printf("* ");
            }
        }
        printf("\n");
    }
}