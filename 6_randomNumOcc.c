#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int countFrequency(int n, int arr[]){
    int i,freq[10] = {0};
    for(i=0;i<n;i++){
        ++freq[arr[i]];
    }
    for(i=0;i<10;i++)
        printf("Occurence of %d is %d\n", i, freq[i]);
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int array1[n],i;
    srand(time(0));
    for(i=0;i<n;i++){
        array1[i] = rand()%10;     
    }
    countFrequency(n, array1);
    return 0;
}