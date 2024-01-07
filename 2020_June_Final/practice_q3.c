#include<stdio.h>
int main(){
    FILE *bf;
    bf=fopen("budge.txt","r");
    if(bf==NULL){
        perror("Error");
        return 1;
    }
    int i,j;
    float cSum[3]={0};
    for(i=0;!feof(bf);i++){
        float cVal[3];
        fscanf(bf,"%f %f %f", &cVal[0],&cVal[1],&cVal[2]);
        for(j=0;j<3;j++)
            cSum[j]+=cVal[j];
    }
    for(j=0;j<3;j++)
        printf("%.2f\t",cSum[j]);
    return 0;
}