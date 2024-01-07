#include<stdio.h>
int main(){
    char sent[100];
    int i=0,l=0;
    gets(sent);
    while(sent[i]!='\0'){
        printf("%c", sent[i]);
        if(sent[i]==' ' || sent[i]=='\n' || sent[i+1]=='\0')
            printf("\n");
        i++;
    }
}