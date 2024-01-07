#include<stdio.h>
int fact(int n){
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
int combin(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int girls = 3, boys = 7, total, ways, toSelect=4;
    total = boys+girls;
    ways = combin(total,toSelect);
    printf("You can choose team in total %d ways", ways);
    return 0;
}