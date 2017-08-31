#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n;
printf("Enter number");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
else
printf("%d \n",i);
break;
}
}
}

