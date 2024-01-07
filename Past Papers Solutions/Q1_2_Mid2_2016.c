#include<stdio.h>
#include<string.h>

int isVowel(char ch){
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}
int isConsonant(char ch){
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 0;
        break;
    default:
        return 1;
        break;
    }
}
int main(){
    char ch, vRes[6],cRes[6] ;
    while(1){
    printf("Enter the character: ");
    scanf("%c", &ch);
    getchar();
    if(isVowel(ch))
        strcpy(vRes,"true");
    else
        strcpy(vRes,"false");
    if(isConsonant(ch))
        strcpy(cRes,"true");
    else
        strcpy(cRes,"false");
    printf("Consoant: %s\nVowel: %s\n", cRes,vRes);
    }
    return 0;
}