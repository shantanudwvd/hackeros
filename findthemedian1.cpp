using namespace std;
#include<iostream>
#include<cstring>
int main()
{
int a[100000],mean;
float median;
int i,j=0,k=1;
int n,l,swap;
cin>>n;
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
//PRINTING THE SORTED LIST
for(i=0;i<n;i++)
{
	cout<<"\n"<<a[i];
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

