#include<stdio.h>
void message( )
{
printf ("\nPraise worthy and C worthy are synonyms") ;
}
int main(){
    // int i = 2, k=1;
    // while (i< 5) 
    // {
    // for(int j = 1;j <= i;++j){ 
    // do{
    // printf("i=%d,j=%d,k=%d\n",i,j,k);
    // k++;
    // }while(k<2);
    // }
    // ++i;
    // }
//     int k;
//  for(int j = 1; j <= 5; ++j) 
//  { k=0;
//  do
// {
//  printf("#");
//  k++;
//  if(k==j-1)
//  { printf("-"); }
// }while(k<j);
// printf("\n"); 
//  }
// int i = 1, j = 1;
//  for( ; ; )
//  { 
//  if(i>5)
//  break;
//  else
//  j+=i;
//  printf("\n %d",j);
//  i+=j;
//  }
// int a, b, c;
//  a=7;
//  b=2;
//  c=b+a/b%2-1;
//  printf("%d",c);
// int i = 0;
//  switch (i)
//  {
//  case '0': printf("Hello");
//  break;
//  case '1': printf("World");
//  break;
//  default: printf("Hello World");
//  }
//     int i;
//  if (printf("0"))
//  i = 3;
//  else
//  i = 5;
//  printf("%d", i);
// int n = 5; 
//  for(printf("20k"); n > 0;) {
// printf("\nFAST NUCES", n++); 
// printf("\nHello world!", n-=7 );
//  }
// int i = 1, j = 1;
// for(--i, j++ ; i<10; i+=2, j--, 
// j++, i+=j)
// {
// printf("loop ");
// }
// int a;
// int b = 1000;
// for( a = 1; a < 6; a++, b-- )
// {
// for ( b = 1; b <= a; b++, a /= 
// 1000 ){
// printf("* ",a,b);
// a *= 1000; 
//  }
// printf("\t\n");
//  }
// char str[]="2020";
//  while(str+strlen(str))
// printf("*");
// message();
// int three[][3] = {
// 2, 4, 3,
// 6, 8, 2,
// 2, 3 ,1
// } ;
// printf ( "\n%d", three[1][1] 
// ) ;

// int i = 4, j = 2 ;
// junk ( &i, j ) ;
// printf ( "\n%d %d", i, j ) ;

    // char s[ ] = "Get organised! learn C!!" ;
    // printf ( "\n%s", &s[6] ) ;
    // printf ( "\n%s", s ) ;
    // printf ( "\n%s", &s ) ;
    // printf ( "\n%c", s[2] ) ;
//     int i = 1;
// do
// {
//  while(i)
//  i--;
//  for(i++; 0; i++)
//  break;
// }while(1);
// printf("%d", i);
// int a[5] = {5, 1, 15, 20, 25};
//  int i, j, m;
//  i = ++a[1];
//  j = a[1]++;
//  m = a[i++];
//  printf("%d, %d, %d", i, j, m);
// int alpha[5],count;
// alpha[0] = 5;
// for (count = 1; count < 5; count++)
// {
// alpha[count] = 5 * count + 10;
// alpha[count - 1] = alpha[count] - 
// 4;
// }
// for (count = 0; count < 5; 
// count++){
// printf("%d", alpha[count] );
// }

int i = 0;
while(++i)
{
i == --i?i = 0:i = 1;
 }
printf("%d", i);
    return 0;
}
// junk ( int *i, int j )
// {
// *i = *i * *i ;
// j = j * j ;
// }