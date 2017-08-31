#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y)
{
return(y+x);
}
int main()
{
float x=0,y=1,h,k,k1,k2;
int i,n;
printf("enter the number of sub intervals");
scanf("%d",&n);
h=0.1/n;
for(i=0;i<=n;i++)
{
k1=h*f(x,y);
k2=h*f(x+0.5*h,y+0.5*k1);
y=y+k;
x=x+h;
printf("after %d interval x=%f, y=%f",i,x,y);
}
printf("\n so after %d iteration y=%f",n,y);
}
