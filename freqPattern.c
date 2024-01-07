#include<stdio.h>
int main(){
    int i;
    int freq[6] = {0}, resp[5] = {1, 1, 1, 4, 5};
    for(i=0;i<=4;i++)
        ++freq[resp[i]];
    for(i=1;i<=5;i++){
        printf("%d: ",i);
        for(int j=1;j<=freq[i];j++)
            printf(" * ");
        printf("\n");
    }
    return 0;
}