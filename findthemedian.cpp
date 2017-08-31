using namespace std;
#include<iostream>
int main()
{
int a[1000],mean;
float median;
int n,i,j,x,k,m;
int l=1;
cout<<"Enter the array size: ";
cin>>n;
cout<<"Enter the given elements to be sorted: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(j=0,k=1;k<=n-1;j++,k++)
{
if(a[j]>a[k])
{
x=a[j];
a[j]=a[k];
a[k]=x;
m=j;
for(;(m-l)>=0;m--)
{	
if(a[m]<a[m-l])
{
x=a[m];
a[m]=a[m-l];
a[m-l]=x;
}
else 
break;
}
}
else if(a[j]<a[k]);
}
if(n%2!=0)
{
	i=i/2;
	median=a[i];
}
else if(n%2==0)
{
	i=i/2;
	mean=(a[i]+a[i-1])/2;
	median=mean;
}
cout<<median;
}


