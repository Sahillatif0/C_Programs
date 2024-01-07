#include<stdio.h>
#include<stdlib.h>
int main(){
    int  i,j;
    int **visits = (int**) malloc(5*sizeof(int*));
    int *tVisits = (int*) calloc(5,sizeof(int));
    for(i=0;i<5;i++)
        *(visits+i) = (int*) malloc(7*sizeof(int));
    for(i=0;i<5;i++){
        printf("Enter data for surgeon %d: ",i+1);
        for(j=0;j<7;j++){
            scanf("%d",(*(visits+i)+j));
            *(tVisits+i) += (*(*(visits+i)+j));
        }
    }
    for(i=0;i<5;i++)
        printf("Average visits by surgeon %d: %d\n", i+1,(*(tVisits+i))/7);
    return 0;
}