#include <stdio.h>
int main(){
	int i, j;
	int row1, col1, row2, col2;
	printf("Enter the row and coloumn of first matrix: ");
	scanf("%d %d", &row1, &col1);
	printf("Enter the row and coloumn of second matrix: ");
	scanf("%d %d", &row2, &col2);
	int matrix1[row1][col1];
	int matrix2[row2][col2];
	int mulmatrix[row1][col2];
	printf("Enter the first matrix: ");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d", &matrix1[i][j]);
		}
		}
	printf("Enter the second matrix: ");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d", &matrix2[i][j]);
		}
		}
	printf("\nThe first matrix is: \n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
		}
	printf("The second matrix is: \n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%d ", matrix2[i][j]);
		}
		printf("\n");
		}
	if(col1==row2){
		printf("\nThe multiplication of two matrices: \n");
		int k=0;
		for(i=0;i<row1;i++)
			for(j=0;j<col2;j++)
				mulmatrix[i][j]=0;
		for(i=0;i<row1;i++){
			for(j=0;j<col2;j++){
				for(k=0;k<row2;k++){
				mulmatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
			}
			printf("%d ", mulmatrix[i][j]);
			}
		printf("\n");
		}
		}
	else{
		printf("\nMultplication Not Possible!");
	}

}
	
