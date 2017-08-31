#include<stdio.h>
#include<conio.h>
int main()
{
int n,reversedinteger=0,remainder,originalinteger;
printf("Enter an integer");
scanf("%d",&n);
originalinteger=n;
while(n!=0)
{
remainder=n%10;
reversedinteger=reversedinteger*10+remainder;
n=n/10;
}
if(originalinteger==reversedinteger)
printf("%d is a pallindrome",originalinteger);
else
printf("%d is not pallidrome",originalinteger);
return 0;
}
