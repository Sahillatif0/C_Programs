#include<stdio.h>
#include<string.h>
void getPass();
void valPass(char pass[]);
void authPass(char Pass[]);
void getPass(){
    char pass[50];
    printf("Enter password: ");
    gets(pass);
    valPass(pass);
}
void valPass(char pass[]){
    if(strlen(pass)<8){
        printf("Entered Password length is small\nAgain ");
        getPass();
    }
    else
        authPass(pass);
}
void authPass(char pass[]){
    if(strcmp(pass,"Secure123")==0)
        printf("Login successful. Welcome!");
    else{
        printf("Login failed. Incorrect password.\nAgain ");
        getPass();
    }
}
int main(){
    getPass();
    return 0;
}