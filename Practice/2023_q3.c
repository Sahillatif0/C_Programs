#include<stdio.h>
int foo(int* arr,int x,int n,int sum){
    int min=1000,m[n],i;
    // for(i=0;i<n;i++){
    //     m[i]=1000;
    // }
    for(i=n-1;i>=0;i--){
        if(x==sum)
            return 0;
        else if(x>sum)
            m[i] = 1+foo(arr,x,n,sum+arr[i]);
    }
    if(x>sum)
        for(i=0;i<n;i++){
            if(min>m[i] && m[i]!=-1)
                min = m[i];
        }
        
    return min;
}
int main(){
    int arr[3] = {1,4,4},n=3,x=11;
    int m = foo(arr,x,n,0);
    printf("%d",m);
    return 0;
}