#include <stdio.h>
int main(){
    int evenCnt=0, totalNum, numCnt=0;
    printf("Enter number of Total number to count even: ");
    scanf("%d", &totalNum);
    while (totalNum>numCnt++)
    {
        int number;
        printf("Enter %dth number to check if it is even number: ",numCnt);
        scanf("%d", &number);
        if(number%2==0)
            evenCnt++;
    }
    printf("total number of even in given values is %d", evenCnt);
    
}