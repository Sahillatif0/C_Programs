#include<stdio.h>
int mul(int m, int n){
    if(n==1)
        return m;
    else if(n==0)
        return 0;
    return m+mul(m,n-1);

}
int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    int multi = mul(m,n);
    printf("%d", multi);
    return 0;
}