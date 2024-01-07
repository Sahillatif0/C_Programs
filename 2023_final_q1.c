#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char **longerWords(FILE *pf, FILE *of){
    char content[1000];
    fgets(content,1000,pf);
    int i=0,j=0,m=0,maxInd[3]={0},max[3]={0};
    int *len = (int*) calloc(1,sizeof(int));
    char **words = (char**) malloc(sizeof(char*));
    char word[20];
    while(content[i]!='\0'){
        if(content[i]==' ' || content[i]==',' || content[i]=='<' || content[i]=='>' || content[i]=='.'){
            len = realloc(len,(m+1)*sizeof(int));
            word[j] = 0;
            words = realloc(words,(m+1)*sizeof(char*));
            len[m] = j;
            words[m] = (char*) malloc((len[m]+1)*sizeof(char));
            j=-1;
            strcpy(words[m++],word);
            strcpy(word," ");
        }
        else 
            word[j] = content[i];
        i++;
        j++;
    }
    for(i=0;i<m;i++){
        if(len[i]>max[0]){
            max[1] = max[0];
            maxInd[1] = maxInd[0];
            max[0] = len[i];
            maxInd[0] = i;
        }
        else if(len[i]>max[1]){
            max[2] = max[1];
            maxInd[2] = maxInd[1];
            max[1] = len[i];
            maxInd[1] = i;
        }
        else if(len[i]>max[2]){
            max[2] = len[i];
            maxInd[2] = i;
        }
    }
    char** array = (char**) malloc(3*sizeof(char *));
    for(i=0;i<3;i++){
        array[i] = (char*) malloc(max[i]*sizeof(char));
        strcpy(array[i],words[maxInd[i]]);
    }
    rewind(pf);
    while(!feof(pf)){
        char word[20];
        int found = 0;
        fscanf(pf,"%s",word);
        for(i=0;i<3;i++)
            if(!strcmp(word,array[i]))
                found = 1;
        if(found)
            fprintf(of, "<L>%s</L> ", word);
        else
            fprintf(of, "%s ", word);
    }
    return array;
}
void concatenate(){
    FILE *of, *temp;
    of = fopen("output.txt", "r");
    if(of==NULL){
        perror("Error");
        return;
    }
    
    temp = fopen("temp.txt", "w");
    if(of==NULL){
        perror("Error");
        return;
    }
    char pword = 'a';
    int found = 0;
    while(!feof(of)){
        char word = fgetc(of);
        if(pword=='<' && word=='s')
            found = 1;
        if(pword=='<' && word=='/')
            found=0;
        pword = word;
        if(!found || (word!=' '))
            fputc(word,temp);
    }
    fclose(of);
    fclose(temp);
    of = fopen("output.txt", "w");
    if(of==NULL){
        perror("Error");
        return;
    }
    
    temp = fopen("temp.txt", "r");
    if(of==NULL){
        perror("Error");
        return;
    }
    char content[1000];
    fgets(content,1000,temp);
    content[strlen(content)-1] = 0;;
    fputs(content,of);
}
int main(){
    FILE *pf;
    pf = fopen("input.txt", "r");
    if(pf==NULL){
        perror("Error");
        return 1;
    }
    FILE *of;
    of = fopen("output.txt", "w");
    if(of==NULL){
        perror("Error");
        return 1;
    }
    char** words = longerWords(pf,of);
    for(int i=0;i<3;i++)
        puts(words[i]);
    fclose(of);
    fclose(pf);
    concatenate();
    return 0;
}