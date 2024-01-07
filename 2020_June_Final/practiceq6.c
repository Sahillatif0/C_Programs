#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int i,arr[10];
    for(i=0;i<10;i++){
        arr[i] = rand()%255+1;
        if(arr[i]%(rand()%9+1)==0)
            arr[i]*=-1;
        // arr[i] = rand()%255-rand()%255;
    }    
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 