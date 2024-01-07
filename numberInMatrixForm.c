#include <stdio.h>
int main(){
    int i;
    int arr[9];
    for(i=0;i<9;i++){
            printf("Enter element: ");
            scanf("%d", &arr[i]);
    }
    for(i=0;i<3;i++){
        printf("|");
        for(int j=0;j<3;j++)
            printf(" %d", arr[((3*i)+j)]);
        printf(" |\n");
    }

}