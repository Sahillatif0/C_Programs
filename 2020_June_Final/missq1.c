#include<stdio.h>
int main(){
    FILE *pf,*af;
    pf = fopen("file.txt","r");
    if(pf==NULL){
        perror("Error");
        return 1;
    }
    af = fopen("file2.txt","w");
    if(af==NULL){
        perror("Error");
        return 1;
    }
    char con[101];
    fgets(con,21,pf);
    printf("%s\n", con);
    fprintf(af,"%s",con);
    char msg[20];
    gets(msg);
    fprintf(af,"%s",msg);
    fseek(pf,20,SEEK_SET);
    for(int i=0;!feof(pf);i++)
        con[i] = fgetc(pf);
    printf("%s\n", con);
    fprintf(af,"%s",con);
    fclose(af);fclose(pf);
    remove("file.txt");
    rename("file2.txt","file.txt");
    return 0;
}