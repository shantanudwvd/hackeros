using namespace std;
#include<iostream>
int main()
{
int a[100];
int n,i,j,x;
cout<<"enter array size";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
x=a[n-1];
for(j=n-2;j>=0;j--)
{
if(a[j]>x)
{
a[j+1]=a[j];
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<"\n";
}
else
{
a[j+1]=x;
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
break;
}
}
if(a[0]==a[1])
{
a[0]=x;
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
}
