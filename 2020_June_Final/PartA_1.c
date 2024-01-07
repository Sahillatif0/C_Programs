#include<stdio.h>
void use_array_to_pointer(double* arr1,int m,double* arr2,int n, double* res){
    int i,j,k=1;
    for(i=0;i<m;i++)
        res[i] = arr1[i];
    for(i=m,j=0;i<m+n;i++,j++)
        res[i] = arr2[j];
    int sorted=1;
    while(sorted){
        sorted =0;
        for(i=0;i<m+n-1;i++){
            if(res[i]>res[i+1]){
                double temp = res[i];
                res[i] = res[i+1];
                res[i+1] = temp;
                sorted =1;
            }
        }
    }
    // for(i=0;i<m+n-1;i++){
    //     if(res[i]==res[i+1]){
    //         k++;
    //         for(j=i;j<m+n;j++)
    //             res[j] = res[j+1];
    //         i--;
    //     }
    // }
    for (i = 1; i < m + n; i++) {
        if (res[i] != res[i - 1]) {
            res[k++] = res[i];
        }
   }
    for(i=0;i<k;i++)
        printf("%.1lf ", res[i]);
}
int main(){
    int m,n,i;
    printf("Enter size of arr1: ");
    scanf("%d", &m);
    double arr1[m];
    printf("Enter elements of array: ");
    for(i=0;i<m;i++)
        scanf("%lf", &arr1[i]);
    printf("Enter size of arr2: ");
    scanf("%d", &n);
    double arr2[n];
    double res[m+n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
        scanf("%lf", &arr2[i]);
    use_array_to_pointer(arr1,m,arr2,n, res);
    return 0;
}