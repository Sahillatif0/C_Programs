#include<stdio.h>
#include<stdlib.h>
void encrypt(FILE *file){
    char* data = (char*) malloc(sizeof(char));
    fseek(file,0,SEEK_SET);
    fflush(stdin);
    int i=-1;
    do{
        i++;
        data = realloc(data,(i+1)*sizeof(char));
        scanf("%c", &data[i]);
    }while(data[i]!='\n');
    data[i] = 0;
    int len=i;
    i=0;
    while(data[i]!='\0'){
        data[i++]+=2;
    }
    fputs(data,file);
    printf("Encrypted Successful");
}
void decrypt(FILE *file){
    char data[1000];
    fgets(data,1000,file);
    int i=0;
    while(data[i]!='\0'){
        data[i++]-=2;
    }
    puts(data);

}
int main(){
    FILE *file;
    file = fopen("data.txt", "a+");
    if(file==NULL){
        perror("Error");
        return 1;
    }
    int opt;
    printf("1. Encrypt\n2. Decrypt\nChoose: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        encrypt(file);
        break;
    case 2:
        decrypt(file);
        break;
    
    default:
        printf("Thank you");
        break;
    }
    return 0;
}