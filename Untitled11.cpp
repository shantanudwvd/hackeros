#include<stdio.h>
int main()
{
int a[10];
int i,j,n,noe=10;
for(i-0;i<10;i++)
{
printf("Enter number");
scanf("%d",&a[i]);
}
printf("Enter no. to delete");
scanf("%d",&n);
for(i=0;i<noe;i++)
{
if(a[i]==n)
{
for(j=i;j<noe-1;j++)
{
a[j]=a[j+1];
}
noe--;
i--;
}
}
for(i=0;i<noe;i++)
{
printf("%d\n",a[i]);
}
}
