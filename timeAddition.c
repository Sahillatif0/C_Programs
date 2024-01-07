#include <stdio.h>
int main(){
    int s1, m1, h1, s2, m2, h2, s3, m3, h3;
    printf("Enter timestamp 1: ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Enter timestamp 2: ");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    h3 = h1+h2;
    m3 = m1+m2;
    s3 = s1+s2;
    if(s3>59){
        m3 += s3/60;
        s3 = s3%60;
    }
    
    if(m3>59){
        h3 += m3/60;
        m3 = m3%60;
    }
    printf("%d:%d:%d", h3,m3,s3);
}