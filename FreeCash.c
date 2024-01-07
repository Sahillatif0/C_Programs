#include<stdio.h>
int main(){
    int i,n,j, cash=1, highest=1;
    scanf("%d", &n);
    int ti[n][2];
    for(i=0;i<n;i++){
        scanf("%d %d", &ti[i][0], &ti[i][1]);
    }
    for(i=1;i<n;i++){
        if(ti[i][0]==ti[i-1][0] && ti[i][1]==ti[i-1][1])
            {
                cash++;
                if(cash>highest)
                    highest = cash;
            }
        else
            cash=1;
        
    }
    printf("%d", highest);
    return 0;
}
