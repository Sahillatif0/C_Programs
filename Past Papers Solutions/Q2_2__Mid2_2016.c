#include<stdio.h>
int func(int a, int b){
    b*=2;
    printf("a = %d, b = %d\n", a,b);
    return --a * (b-8);
}
int sub(int* a, int* b){
    *a-=6;
    printf("a = %d, b = %d\n", *a,*b);
    return *a-- * ++*b;

}
int main(){
    int x =6, y=8;
    x = func(y,y);
    printf("x = %d, y = %d\n", x,y);
    x = sub(&y, &y);
    printf("x = %d, y = %d\n", x,y);
    return 0;
}