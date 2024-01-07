#include<stdio.h>
int main(){
    int matrix[3][3], i,j,rSum=0, cSum=0, dSum=0, magicSq = 0, temp, temp2;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the element of row %d, coloumn %d of matrix: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            rSum += matrix[i][j];
            cSum += matrix[j][i];

        }
    if(i!=0){ 
        if(temp==rSum || temp2 ==cSum){
            temp2 = cSum;
            temp = rSum;
            rSum = 0;
            cSum = 0;
            magicSq = 1;        
    }
    else{
        magicSq = 0;
        break;
    }
    }
    else{
        temp2 = cSum;
        temp = rSum;
        rSum = 0;
        cSum = 0;
    }
    }
    if(!magicSq){
        temp = 0;
        for(i=0;i<3;i++){
            temp += matrix[i][2-i];
            for(j=0;j<3;j++){
                if(i==j){
                    dSum+=matrix[i][j];
                }
            }
        }
        if(temp==dSum){
            magicSq = 1;
        }
    }
    if(magicSq)
        printf("Matrix is Magic Sqaure");
    else
        printf("Matrix is not Magic Sqaure");
    return 0;
}