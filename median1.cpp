using namespace std;
#include<iostream>
int main()
{
int a[100];
int i,j,k,l;
int n,x,median;
//cout<<"Enter the size of array: ";
cin>>n;
//cout<<"Enter the given elements to be sorted: ";
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
	if(n%2==0)
	{
	n=(n+1)/2;
	median=a[n];
	}
	else
	{
	n=n/2;
	median=a[n];
	}		
	cout<<median;
}
