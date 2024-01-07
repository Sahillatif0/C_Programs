#include<stdio.h>
int main(){
    int day1, month1, year1, day2, month2,year2, firstOlder=0;
    printf("Enter the DOB of first person(format: dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    printf("Enter the DOB of second person(format: dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day2, &month2, &year2);
    printf("The DOB of P1 is %d/%d/%d\n", day1, month1, year1);
    printf("The DOB of P2 is %d/%d/%d\n", day2, month2, year2);
    if(year2>year1){
        firstOlder = 1;
    }
    else if(year1>year2){
        firstOlder = 0;
    }
    else{
        if(month2>month1){
            firstOlder = 1;
        }
        else if(month1>month2){
            firstOlder = 0;
        }
        else{
            if(day2>day1){
                firstOlder = 1;
            }
            else if(day1>day2){
                firstOlder = 0;
            }
            else{
                firstOlder = -1;
            }
        }
    }
    if(firstOlder == 1){
        printf("first person is older");
    }
    else if(firstOlder == 0){
        printf("second person is older");
    }
    else{
        printf("both have same age");
    }
    return 0;
}