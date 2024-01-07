#include<stdio.h>
#include<ctype.h>
void SentenceCase(char *Text, int *size){
    int i;
    for(i=0;i<*size;i++)
        if(i==0 || (*(Text+i-1)==' ' && *(Text+i-2)=='.') || *(Text+i-1)=='.')
            *(Text+i) = toupper(*(Text+i));
}
int main(){
    int N;
    printf("Enter the length of sentence: ");
    scanf("%d", &N);
    char sent[N+1];
    fflush(stdin);
    printf("Enter Sentence: ");
    gets(sent);
    SentenceCase(sent, &N);
    puts(sent);
    return 0;
}