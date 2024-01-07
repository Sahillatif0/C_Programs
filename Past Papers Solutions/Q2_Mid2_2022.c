#include<stdio.h>
#include<string.h>
int main(){
    char DNAseq[50];
    int freq[4] = {0},i=0;
    scanf("%s", DNAseq);
    while (DNAseq[i]!='\0')
    {
        switch (DNAseq[i++])
        {
        case 'A':
            ++freq[0];
            break;
        case 'G':
            ++freq[1];
            break;
        case 'C':
            ++freq[2];
            break;
        case 'T':
            ++freq[3];
            break;
        default:
            break;
        }
    }
    for(int i=0;i<4;i++){
        if(i==0)
            printf("A: ");
        else if (i==1)
            printf("G: ");
        else if (i==2)
            printf("C: ");
        else
            printf("T: ");
        for(int j=0;j<freq[i];j++)
            printf("* ");
        printf("\n");
        
    }   

    return 0;
}