
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int n, i, j,k, l=0;
	printf("Enter n: ");
    scanf("%d", &n);
    for(i=0;i<(2*n-1);i++){
    	for(j=0;j<=l;j++){
    		printf("%d ",n-j);
		}
		for(k=0;k<(2*n-(2*l+3));k++){
			printf("%d ", n-l);
		}
		for(j=l;j>=0;j--){
			if(n-j!=1){
			
    		printf("%d ",n-j);
			}
		}
		printf("\n");
		if(i+2>n){
    		l--;
		}
		else{
			l++;
		}
	}
    return 0;
}