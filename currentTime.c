#include<stdio.h>
#include<time.h>
int leapYear(){
    int cnt=0;
    for(int i=1970; i<=2023;i++){
        if((i%4==0 && i%100!=0) || i%400==0 ){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return cnt*3600*24;
}
int main(){
    time_t t;
    time(&t);
    int tdays = 0;
    int months[12] = {31, 28, 31,30, 31, 30, 31,31,30, 31,30,31};
    float year = 1970 + ((t-leapYear())/(60*60*24*365.0));
    int cYear = year;
    float month = (year - cYear)*12+1;
    int cMonth = month;
    float day = (year - cYear)*365 + 1;
    for(int i=0;i<cMonth-1;i++){
        tdays += months[i];
    }
    day = day - tdays;
    int cday = day;
    printf("%d, %d, %d:",cYear, cMonth, cday);
    return 0;
}