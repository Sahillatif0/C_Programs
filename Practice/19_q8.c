#include<stdio.h>
typedef struct booksInfo{
    int ID;
    char Title[30]; 
    char Journal[50];
    int issue, year,sPage,ePage;
    char Author[30];

}books;
int main(){
    FILE *p;
    p = fopen("data1.txt", "r");
    books book[2];
    // fscanf(p,"%d %s")
    fscanf(p,"%d %30s %50s %d %d %d %d %30s", &book[0].ID,book[0].Title,book[0].Journal,&book[0].issue,&book[0].year,&book[0].sPage,&book[0].ePage,book[0].Author);
    printf("%d %s %s %d %d %d %d %s", book[0].ID,book[0].Title,book[0].Journal,book[0].issue,book[0].year,book[0].sPage,book[0].ePage,book[0].Author);
    return 0;
}