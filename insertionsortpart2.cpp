using namespace std;
#include<iostream>
int main()
{
int a[1000];
int n,i,j,x,k,m;
int l=1;
cout<<"enter array size";
cin>>n;
cout<<"enter elements";
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
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
}
else if(a[j]<a[k])
{
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;	
}
}
}
