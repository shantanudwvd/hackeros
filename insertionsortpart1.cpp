using namespace std;
#include<iostream>
int main()
{
int a[1000];
int n,i,j,x;
cout<<"enter array size";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
x=a[n-1];
for(i=n-2;i!=-1;i--)
{
if(a[i]>a[n-1])
{
a[i+1]=a[i];
}
else 
break;
}
for(i=0;i<n;i++)
{
cout<<a[i];
}
}
