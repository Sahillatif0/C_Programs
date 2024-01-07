#include<stdio.h>
void fun(int *ptr)
{
*ptr = 30;
}

int main()
{
 int a = 12;
 void *ptr = &a;
 printf("%d", *(int *)ptr);
 getchar();
 return 0;
}
// void function(char **ptr)
// {
// char *ptr1;
// ptr1 = (ptr += sizeof(int))[-2];
// printf("%s\n", ptr1);
// }