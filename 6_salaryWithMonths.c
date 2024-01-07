#include <stdio.h>
#include <string.h>
int main(){
	int salary[6], i=0, sum =0, temp, sorted=1,j,c=0;
	char temp2[10];
	char months[6][10] = {"Janaury", "February", "March", "April", "May", "June"};
	for(i=0;i<6;i++){
		printf("Enter the salary of %s: ", months[i]);
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
			strcpy(temp2,months[i]);
			strcpy(months[i],months[i+1]);
			strcpy(months[i+1], temp2);
			sorted = 1;
		}
		}
	}
	for(i=0;i<6;i++){
		printf("The salary of month %s is %d\n",months[i], salary[i]);
	}
	printf("Average Salary = %.2f\nTotal Salary = %d",sum/6.0, sum);
 }
