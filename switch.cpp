#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
char opr;
printf("enter operator");
scanf("%d",&opr);
switch(opr)
{
case '+':
printf("sum is %d",a+b);
case '-':
printf("subtraction is %d",a-b);
case '*':
printf("multiplication is %d",a*b);
case '/':
if(a>b)
printf("division is %d",a/b);
else 
printf("division is %d",b/a);
}
getch();
}
