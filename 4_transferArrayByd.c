#include <stdio.h>
int main(){
	int N,d,i,temp,j;
	printf("Enter the number of elements of array: ");
	scanf("%d", &N);
	int arr[N];
	printf("Enter d: ");
	scanf("%d", &d);
	for(i=0;i<N;i++){
		printf("enter element in array: ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<d;i++){
		for(j=0;j<N-1;j++){
			temp = arr[j];
			arr[j] = arr[j+1];	
			arr[j+1] = temp;
		}
	}
	for(i=0;i<N;i++){
		printf("%d ", arr[i]);
	}
}
