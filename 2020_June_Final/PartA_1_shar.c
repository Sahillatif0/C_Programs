#include <stdio.h>
#include <stdlib.h>
int use_array_to_pointer(double*,double*,int,int,double*);
int main(){
int m,n,i;
printf("Enter size of arr1: ");
scanf("%d", &m);
double *arr1=(double*)malloc(m*sizeof(double));
printf("Enter elements of array: ");
for(i=0;i<m;i++)
    scanf("%lf", &arr1[i]);
printf("Enter size of arr2: ");
scanf("%d", &n);
double *arr2=(double*)malloc(n*sizeof(double));
double *result=(double*)malloc((m+n)*sizeof(double));
printf("Enter elements of array: ");
for(i=0;i<n;i++)
    scanf("%lf", &arr2[i]);
use_array_to_pointer(arr1,arr2,m,n,result);
free(arr1);
free(arr2);
free(result);
}
int use_array_to_pointer(double *arr1,double *arr2,int m,int n,double *result){
	double *resultnew=(double*)malloc((m+n)*sizeof(double));
	int i,j,k=1,count=0;
	for(i=0;i<m;i++){
		result[i]=arr1[i];
	}
	int a=0;
	for(i=m;i<m+n;i++){
		result[i]=arr2[a];
		a++;
	}
	for(i=0;i<m+n;i++){
		for(j=0;j<m+n-1-i;j++){
		if(result[j]>result[j+1]){
			double temp=result[j];
			result[j]=result[j+1];
			result[j+1]=temp;
		}
	}
	} 
	
	for (i = 1; i < m + n; i++) {
        if (result[i] != result[i - 1]) {
            result[k++] = result[i];
        }
   }
	
	for(i=0;i<k;i++){
		printf("%0.1lf ",result[i]);
	}
}