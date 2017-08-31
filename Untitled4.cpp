#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
//c=a;
//a=b;
//b=c;
a=a+b;
b=a-b;
a=a-b;
printf("After interchange a=%d b=%d",a,b);
}
