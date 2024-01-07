#include<stdio.h>
#include<string.h>
int main(){
    int palindrome = 1;
    char word[20];
    printf("Type word: ");
    gets(word);
    for(int i=0;i<strlen(word);i++)
        if(word[i]!=word[strlen(word)-1-i]){
            palindrome = 0;
            break;
        }
    if(palindrome)
        printf("%s is palindrome", word);
    else
        printf("%s is not palindrome", word);
    return 0;
}