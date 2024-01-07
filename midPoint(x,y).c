#include <stdio.h>
int main(){
    int x1, x2, y1, y2;
    float midPointx, midPointy;
    printf("Enter value for x1: ");
    scanf("%d",&x1);
    printf("Enter value for x2: ");
    scanf("%d",&x2);
    printf("Enter value for y1: ");
    scanf("%d",&y1);
    printf("Enter value for y2: ");
    scanf("%d",&y2);
    midPointx = (x1+x2)/2.0;
    midPointy = (y1+y2)/2.0;
    printf("Midpoint of (%d, %d) and (%d, %d) = (%.2f, %.2f)", x1,y1, x2, y2, midPointx,midPointy);

}