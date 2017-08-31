//wap to input elements in array in sorted order
#include<stdio.h>
main()
{
int a[5];
int n,i,j,k;
for(i=0;i<5;i++)
{
printf("Enter number");
scanf("%d",&n);
for(j=0;j<i;j++)
{
if(a[j]>n)
{
break;
}
}
for(k=i;k>j;k--)
{
a[k]=a[k-1];
}
a[j]=n;
}
for(i=0;i<5;i++)
{
printf("%d \n",a[i]);
}
}
