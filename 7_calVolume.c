#include<stdio.h>
int calcVol(int h, int a){
    return (a*a*h)/3;
}
int getData(){
    int h,a,vol;
    printf("Enter height and area: ");
    scanf("%d %d", &h, &a);
    vol = calcVol(h, a);
    return vol;
}
int main(){
    printf("Volune of shape = %dm^3", getData());
    return 0;
}