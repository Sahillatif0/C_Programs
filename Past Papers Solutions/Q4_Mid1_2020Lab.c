#include<stdio.h>
int dist(int m, int note, int n){
    return m/(note*n);    
}
int main(){
    int m,n, n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    printf("Enter rupees: ");
    scanf("%d", &m);
    printf("Enter children: ");
    scanf("%d", &n);
    while (m>n)
    {
        if(m/n>=100){
            n100 = dist(m,100,n);
            m -= n100*100*n;
        }
        else if(m/n>=50){
            n50 = dist(m,50,n);
            m -= n50*50*n;
        }
        else if(m/n>=20){
            n20 = dist(m,20,n);
            m -= n20*20*n;
        }
        else if(m/n>=10){
            n10 = dist(m,10,n);
            m -= n10*10*n;
        }
        else if(m/n>=5){
            n5 = dist(m,5,n);
            m -= n5*5*n;
        }
        else if(m/n>=2){
            n2 = dist(m,2,n);
            m -= n2*2*n;
        }
        else if(m/n>=1){
            n1 = dist(m,1,n);
            m -= n1*n;
        }
    }
    printf("100 Notes: %d\n50 Notes: %d\n20 Notes: %d\n10 Notes: %d\n5 Coins: %d\n2 Coins: %d\n1 Coins: %d\nRemaining %d", n100,n50,n20,n10,n5,n2,n1,m); 
    return 0;
}