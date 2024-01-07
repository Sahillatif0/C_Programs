#include<stdio.h>
int main(){
    int i,n, of=0, re=0;
    scanf("%d", &n);
    int event[n];
    for(i=0;i<n;i++){
        scanf("%d", &event[i]);
    }
    for(i=0;i<n;i++){
        if(event[i]>0){
            of+=event[i];
        }
        else if(event[i]==-1){
            if(of>0){
                of--;
            }
            else{
                re++;
            }
        }
    }
    printf("%d", re);
    return 0;
}