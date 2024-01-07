#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isVowel(char a){
    if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u')
        return 1;
    return 0;
}
int main(){
    FILE *fp;
    fp = fopen("decrypt.txt", "r");
    if(fp==NULL){
        perror("Error");
        return 1;
    }
    char* str = (char *) calloc(1,sizeof(char));
    int i,j;
    for(i=0,j=0;!feof(fp);i++,j++){
        str = realloc(str,(i+1)*sizeof(char));
        str[i] = fgetc(fp);
        if(isVowel(str[i])){
            str = realloc(str,(i+3)*sizeof(char));
            if((j+1)%2==0){
                str[i]='v';
                str[i+1] = 'o';
                str[i+2] = 'w';
            }
            else{
                str[i]='V';
                str[i+1] = 'O';
                str[i+2] = 'W';
            }
            i+=2;
        }
        else if((str[i-2]-3)=='s' && i>2){
            str = realloc(str,(i+4)*sizeof(char));
            str[i-2] = 'P';
            str[i-1] = 'F';
            str[i] = '-';
            str[i+1] = 'L';
            str[i+2] = 'a';
            str[i+3] = 'b';
            i+=5;
        }
        else{
            str[i]+=3;
        }
    }
    puts(str);
    return 0;
}