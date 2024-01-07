#include <stdio.h>
int main(){
	int N,i,j;
	printf("Enter the number of elements in array: ");
	scanf("%d", &N);
	int arr[N], freq[6]={0};
	for(i=0;i<N;i++){
		printf("Enter the element %d of array: ", i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++){
		++freq[arr[i]];
	}
	for(i=0;i<6;i++){
		if(freq[i]!=0){
			printf("Frequency of %d is %d\n", i, freq[i]);
		}
	}
}
