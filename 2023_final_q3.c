#include<stdio.h>
#include<stdlib.h>
int isPrime(int n){
    int i;
    for(i=2;i<n-1;i++)
        if(n%i==0)
            return 0;
    if(n<3)
        return 0;
    return 1;
}
int **goldbach_pairs(int* even_numbers, int n){
    int i,j,k,m=0,**pairs = (int**) calloc(1,sizeof(int*));
    for(i=0;i<n;i++){
        for(j=0;j<even_numbers[i];j++){
            if(isPrime(j)){
            for(k=j;k<even_numbers[i];k++){
                if(k+j==even_numbers[i] && isPrime(k)){
                    pairs[m] = (int *) calloc(2,sizeof(int));
                    pairs[m][0] = j;
                    pairs[m++][1] = k;
                    pairs = realloc(pairs,(m+1)*sizeof(int*));
                }
            }
            }
        }
    }
    pairs[m] = (int *)calloc(2,sizeof(int));
    pairs[m][0] = -1;
    pairs[m][1] = -1;
    return pairs;
}
int main(){
    int i=-1, *even_numbers = (int *) calloc(1,sizeof(int));
    do{
        i++;
        even_numbers = realloc(even_numbers, (i+1)*sizeof(int));
        scanf("%d", &even_numbers[i]);
    }while(even_numbers[i]!=-1);
    int** pairs = goldbach_pairs(even_numbers,i);
    i=0;
    do{
        printf("(%d,%d), ", pairs[i][0],pairs[i][1]);

    }while(pairs[i++][0]!=-1);
    return 0;
}