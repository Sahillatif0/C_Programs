#include <stdio.h>
int main(){
	int salary[6], i=0, sum =0, temp, sorted=1,j,c=0;
	for(i=0;i<6;i++){
		printf("Enter the salary of %d: ", i+1);
		scanf("%d", &salary[i]);
		sum += salary[i];
	}
	while(sorted){
		c++;
		sorted = 0;
		for(i=0;i<5;i++){
		if(salary[i]<salary[i+1]){
			temp = salary[i];
			salary[i] = salary[i+1];
			salary[i+1] = temp;
			sorted = 1;
		}
		}
	}
	for(i=0;i<6;i++){
		printf("The salary of month %d is %d\n",i+1, salary[i]);
	}
	printf("Average Salary = %.2f\nTotal Salary = %d",sum/6.0, sum);
 }