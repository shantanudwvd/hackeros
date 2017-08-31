using namespace std;
#include<iostream>
int main()
{
int a[100];
int i,j,k,l;
int n,x;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the given elements to be sorted: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=0,k=1;k<n;j++,k++)
{
if(a[j]>a[k])
{
x=a[j];
a[j]=a[k];
a[k]=x;
}
else if(a[j]<a[k]);
}
}
cout<<"Sorted array: ";
for(i=0;i<n;i++)
{
cout<<"\n"<<a[i];
}
}
