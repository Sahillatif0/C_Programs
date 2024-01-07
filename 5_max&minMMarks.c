#include <stdio.h>
int main(){
	int studentMarks[50];
	int i, marks, minimum=0, maximum=0;
	for(i=0;i<50;i++){
		printf("Enter marks for student %d: ", i+1);
		scanf("%d", &marks);
		if(marks<0 || marks>10){
			printf("Wrong Entry! \n");
			i--;
		}
		else{
			studentMarks[i] = marks;
			if(marks<minimum)
				minimum = marks;
			if(marks>maximum)
				maximum = marks;
		}
	}
	for(i=0;i<50;i++){
		printf("Marks of student %d is %d\n", i+1, studentMarks[i]);
	}
	printf("Minimum Marks: %d\nMaximum Marks: %d", minimum, maximum);
}
