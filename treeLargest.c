#include<stdio.h>
#include<math.h>
int poww(int x,int y){
    int rs = 1,i;
    for (i = 0; i < y; i++)
        rs*=x;
    return rs;
    
}
int main(){
    int arr[15], a=0,b=1,n=0,c=0, highest=0,i,j;
    for(i=0;i<15;i++){
        scanf("%d", &arr[i]);
    }
        while(a<15){
            highest = 0;
            b = poww(2,n);
            for(j=a;j<b+a;j++){
                if(arr[j]>highest)
                    highest = arr[j];
            }
            a+=b;
            printf("highest: %d\n", highest);
            n++;
        }
    return 0;
}
