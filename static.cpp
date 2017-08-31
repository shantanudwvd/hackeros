#include<stdio.h>
void fun(int,int);
int main()
{
fun(2,5);
fun(3,9);
}
void fun(int x,int y)
{
static int s=0;
s=s+x+y;
printf("%d \n",s);
}
