#include <stdio.h>
int main(){
int givenYear = 1900, year, day, totalDays, passedYear, leapYears;
printf("Enter the year: ");
scanf("%d", &year);
passedYear = (year-givenYear);
leapYears = passedYear/4;
totalDays = passedYear*365 + leapYears;
day = totalDays%7;
switch (day)
{
case 0:
    printf("It will be Monday on 01/01/%d", year);
    break;
case 1:
    printf("It will be Tuesday on 01/01/%d", year);
    break;
case 2:
    printf("It will be Wednesday on 01/01/%d", year);
    break;
case 3:
    printf("It will be Thursday on 01/01/%d", year);
    break;
case 4:
    printf("It will be Friday on 01/01/%d", year);
    break;
case 5:
    printf("It will be Saturday on 01/01/%d", year);
    break;
case 6:
    printf("It will be Sunday on 01/01/%d", year);
    break;

default:
    break;
}
}