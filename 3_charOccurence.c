#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char name[40];
	int n, i,j=0, freq[26]={0}, highest[2]={0};
	printf("Type your name: ");
	gets(name);
	printf("Enter number of courses offered: ");
	scanf(" %d", &n);
	char courses[n][40];
	getchar();
	for(i=0;i<n;i++){
		printf("Type your course %d: ", i+1);
		gets(courses[i]);
	}
	for(i=0;i<strlen(name);i++)
			++freq[tolower(name[i])-97];
	for(i=0;i<n;i++)
		for(j=0;j<strlen(courses[i]);j++)
			++freq[tolower(courses[i][j])-97];
	

	for(i=0;i<27;i++)
		if(freq[i]>highest[0]){
			highest[0] = freq[i];
			highest[1] = i+97;
		}
	printf("Maximum occurence is of character '%c' that is repeated %d times",highest[1],highest[0]);
}
