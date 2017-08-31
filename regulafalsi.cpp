#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return(2*x-log10(x)-6);
}
int main()
{
float a,b,x,x1,err=0.00005;
int itr=1,n;
printf("Enter the value of a,b and max iteration");
scanf("%f %f %d",&a,&b,&n);
x=a-(((b-a)/(f(b)-f(a)))*f(a));
printf("iteration no. %d x= %f \n",itr,x);
itr=itr+1;
while(itr<n)
{
if((f(a)*f(b))<0)
b=x;
else
a=x;
x=a-(((b-a)/(f(b)-f(a)))*f(a));
printf("iteration no. %d x= %f \n",itr,x);
if(fabs(x1-x)<err)
{
printf("\n After %d th iteration value of x= %f \n",itr,x);
break;
}
x1=x;
itr++;
}
if(itr>=n)
{
printf("\n solution does not exist as iteration are not sufficient");
}
getch();
}
