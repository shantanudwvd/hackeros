using namespace std;
#include<iostream>
#include<cstring>
int main()
{
int a[100];
int i,j=0,k=1;
int n,l,swap;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the given elements to be sorted: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(l=0;l<n;l++)
{
for(;k<n;k++)
{
if(a[j]>a[k])
{
swap=a[k];
a[k]=a[j];
a[j]=swap;
}
else if(a[j]<a[k]);
}
j++;
k=j+1;
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
