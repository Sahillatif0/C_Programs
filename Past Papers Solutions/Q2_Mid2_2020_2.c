#include<stdio.h>
int main(){
    int m,n;
    printf("Enter m and n(m<n): ");
    scanf("%d %d", &m,&n);
    char pattern[m],text[n];
    printf("Enter pattern: ");
    scanf("%s", pattern);
    getchar();
    printf("Enter text: ");
    scanf("%s", text);
    getchar();
    int i=0,j=0;
    do{
        if(pattern[j]==text[i])
            j++;
        else{
            i-=j;
            j=0;
        }
        i++;
    }while(j<m && i!=n);
    if(j==m)
        printf("pattern found");
    else
        printf("pattern not found");
    return 0;
}