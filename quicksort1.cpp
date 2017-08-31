using namespace std;
#include<iostream>
int main()
{
int a[10],left[10],right[10],equal[10];
int n,i,p,j,k,l;
int s=0,t=0;
cout<<"enter no. of elements: ";
cin>>n;
cout<<"enter elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
p=a[0];
for(k=0,l=0,j=0;j<n;j++)
{
if(a[j]>p)
{
right[k]=a[j];
k++;
s=s+1;
}
else if(a[j]<p)
{
left[l]=a[j];
l++;
t=t+1;
}
else if(a[j]==p)
{
equal[j]=a[j];
}
}
for(i=0;i<t;i++)
{
cout<<left[i]<<" ";
}
for(i=0;i<1;i++)
{
cout<<equal[i]<<" ";
}
for(i=0;i<s;i++)
{
cout<<right[i]<<" ";
}
}
