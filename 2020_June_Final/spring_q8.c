#include<stdio.h>
#include<string.h>
void display(char names[][15],char status[][2]){
    printf("------------------------------------\n|%-5s%-10s%-3s|%-5s%-10s|\n------------------------------------\n"," ","Members"," "," ", "Status");
    for(int i=0;i<10;i++)
        printf("|%-6s%-9s%-3s|%-7s%-8s|\n"," ",names[i]," "," ",status[i]);
    printf("------------------------------------\n");
}
void swap(char *str1,char *str2){
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
void bubble_sort(char names[][15],char status[][2]){
    int sorted = 1,i;
    while(sorted){
        sorted = 0;
        for(i=0;i<9;i++){
            if(strcmp(status[i],status[i+1])==-1){
                swap(status[i],status[i+1]);
                swap(names[i],names[i+1]);
                sorted = 1;
            }
        }
    }
}
int main(){
    char names[10][15] = {"Hina","Sara","Ali","Zain","Bakhtawar","Hashim","Zeeshan","Jameela","Asfa","Zahid"};
    char status[10][2] = {"P","N","P","P","N","P","N","N","N","N"};
    display(names,status);
    bubble_sort(names,status);
    display(names,status);
    return 0;
}