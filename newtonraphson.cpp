#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return(cos(x)-x*exp(x));
}
float df(float x)
{
return(-sin(x)-exp(x)-x*exp(x));
}
int main()
{
float x0,x1,h,err;
int itr,maxitr;
printf("Enter the value of x0,allowed error,max iteration");
scanf("%f %f %d",&x0,&err,&maxitr);
for(itr=1;itr<=maxitr;itr++)
{
h=f(x0)/df(x0);
x1=x0-h;
printf("iteration no. %d x= %f \n",itr,x1);
x0=x1;
if(fabs(h)<fabs(err))
{
printf("\n after %d th iteration value of x= %f \n",itr,x1);
break;
}
}
getch();
}

