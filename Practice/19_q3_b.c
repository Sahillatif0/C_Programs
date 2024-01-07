#include<stdio.h>
#include<stdlib.h>
int main(){
    char* str = (char*) malloc(sizeof(char));
    int i=-1,j,k;
    do{
        i++;
        str = realloc(str, (i+1)*sizeof(char));
        scanf("%c",&str[i]);
    }while(str[i]!='\n');
    str[i]=0;
    int len = i;
    for(i=0;i<len;i++){
        for(j=0;j<len-i;j++)
            printf(" ");
        for(j=0;j<i+1;j++)
            printf("%c ", str[j]);
        printf("\n");
    }
    free(str);
    return 0;
}