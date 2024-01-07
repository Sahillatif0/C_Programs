#include<stdio.h>
int powe(long long int a, long long int n){
    if(n==1)
        return a;
    else if(n==0)
        return 1;
    return a*powe(a, n-1);
}
int main(){
    int i=0;
    long long int a=0,b;
    for(i=0;i<5;i++){
        a += powe(10,i);
        b = powe(a,2);
        printf("%llux%llu = %d\n", a,a,b);
    }
    return 0;
}