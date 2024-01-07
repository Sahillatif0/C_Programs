#include<stdio.h>
void message(int i){
    i%3?printf("Merry! "):printf("X'mas! ");
}
int main(){
    int i=0;
    while(i++<4) printf("Aloha! ");
    printf("\n");
    do printf("Hello! "); while(++i<7);
    printf("\n");
    for(;i<12;i++) message(++i);
    printf("\n");
    return 0;
}