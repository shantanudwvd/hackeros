#include<stdio.h>
int main()
{
int a[3][3];
int i,j,tot,gtot=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter nos ");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
tot=0;
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
tot=tot+a[i][j];
}
printf("%d\n",tot);
}
for(i=0;i<3;i++)
{
tot=0;
for(j=0;j<3;j++)
{
tot=tot+a[i][j];
}
printf("%d\t",tot);
gtot=gtot+tot;
}
printf("%d",gtot);
}
