#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two numbers");
scanf("%d %d",&num1,&num2);
if(num1>num2)
printf("Greater is %d",num1);
else if(num2>num1)
printf("Greater is %d",num2);
else
printf("Both the numbers are same");
}
