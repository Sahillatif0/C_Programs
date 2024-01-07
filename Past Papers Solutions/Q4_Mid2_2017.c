#include<stdio.h>
#include<string.h>

void toggleCase(char sent[], int len){
    int i;
    for(i=0; i<len;i++){
        if(sent[i+1]==' ' || sent[i-1]==' ' || i==0 || i==len-1){
            if(sent[i]<='z' && sent[i]>='a')
                sent[i]-=32;
        }
    }
}
int main(){
    char sent[100];
    gets(sent);
    toggleCase(sent, strlen(sent));
    puts(sent);
    return 0;
}