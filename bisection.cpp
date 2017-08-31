#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return(pow(x,4)-pow(x,1)-10);
}
int main()
{
float a,b,x,x1,err=0.00005;
int itr=1,n;
printf("enter the value of a,b and max iteration");
scanf("%f %f %d",&a,&b,&n);
x=(a+b)/2;
printf("iteration no. %d x=%f \n",itr,x);
itr=itr+1;
while(itr<n)
{
if((f(a)*f(x))<0)
b=x;
else
a=x;
x=(a+b)/2;
printf("iteration no. %d x=%f \n",itr,x);
if(fabs(x1-x)<err)
{
printf("\n after %d alphath iteration value of x is %f \n",itr,x);
break;
}
x1=x;
itr++;
}
if(itr>=n)
{
printf("\n solution does not exist as iteration is not suffficient");
}
}


