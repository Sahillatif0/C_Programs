#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    int temp = c, res=0;
    if(n>3){
        c = a + b + c;
        a = b;
        b = temp;
        res = find_nth_term(n-1,a,b,c);
    }
    else
        return c;
    return res;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}