//wap to merge two sorted arrays
#include<stdio.h>
#include<conio.h>
main()
{
int a[5],b[5];
int c[10];
int i,j,k;
for(i=0;i<5;i++)
{
printf("Enter no. to array1 ");
scanf("%d",&a[i]);
}
for(j=0;j<5;j++)
{
printf("Enter no. to array2 ");
scanf("%d",&b[i]);
}
for(i=0,j=0;i<5 && j<5;k++)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
}
/*while(i<5)
{
c[k]=a[i];
i++;
k++;
}
while(j<5)
{
c[k]=b[j];
j++;
k++;
}*/

for(i=0;i<k;i++)
{
printf("%d \n",c[i]);
}
}
