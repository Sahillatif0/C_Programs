#include<stdio.h>
void order(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int i,t,j,pn1=n1,pn2=n2,pn3=n3,nNum=1,freq[100]={0},repAvail[7]={0};
    for(i=0;i<pn1;i++){
        if(freq[arr1[i]]<1)
            ++freq[arr1[i]];
        else{
            for(int j=i;j<n1-1;j++)
                arr1[j] = arr1[j+1];
            pn1--;
        }
    }
    if(pn1<n1){
        repAvail[0]++;
    }
    for(i=0;i<pn2;i++){
        if(freq[arr2[i]]<1)
            ++freq[arr2[i]];
        else{
            for(int j=i;j<n2-1;j++)
                arr2[j] = arr2[j+1];
            pn2--;
        }
    }
    if(pn2<n2){
        repAvail[1]++;
    }
    for(i=0;i<pn3;i++){
        if(freq[arr3[i]]<1)
            ++freq[arr3[i]];
        else{
            for(int j=i;j<n3-1;j++)
                arr3[j] = arr3[j+1];
            pn3--;
        }
    }
    if(pn3<n3){
        repAvail[2]++;
    }
    int resN=pn1+pn2+pn3,a=1;
    int resArr[resN];
    for(i=0,j=0;i<resN;i++,j++){
        if(a==1)
            resArr[i] = arr1[j];
        else if(a==2)
            resArr[i] = arr2[j];
        else
            resArr[i] = arr3[j];
        if(i==n1-1){
            a = 2;
            j = 0;
        }
        else if (i==n2-1){
            a = 3;
            j = 0;
        }
                    
    }
    for(i=0;i<resN-pn3;i++){
        if(freq[resArr[i]]<1)
            ++freq[resArr[i]];
        else{
            for(int j=i;j<n3-1;j++)
                arr3[j] = arr3[j+1];
            pn3--;
        }
    }
    for(i=0;i<resN;i++){
        if(resArr[i]%2 && (i+nNum)<resN){
            if(resArr[i+nNum]%2==0){
                t = resArr[i];
                resArr[i] = resArr[i+nNum];
                resArr[i+nNum] = t;
                nNum=1;
            }
            else{
                nNum++;
                i--;
            }
        }
    }
}
int main(){
    int n1,n2,n3,i;
    printf("Enter the size of array1 array2 array3: ");
    scanf("%d %d %d", &n1,&n2,&n3);
    int arr1[n1],arr2[n2],arr3[n3];
    printf("Enter elements for array 1: \n");
    for(i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
        if(arr1[i]<0)
            i--;
    }
    printf("Enter elements for array 2: \n");
    for(i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
        if(arr2[i]<0)
            i--;
    }
    printf("Enter elements for array 3: \n");
    for(i=0;i<n3;i++){
        scanf("%d", &arr3[i]);
        if(arr3[i]<0)
            i--;
    }
    order(arr1,arr2,arr3,n1,n2,n3);
    for(i=0;i<n1;i++){
        printf("%d ", arr1[i]);
    }

    return 0;
}