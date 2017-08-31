using namespace std;
#include<iostream>
int main()
{
int a[50];
int n,i,j,k;
cout<<"enter the size of array";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the elements";
cin>>a[i];
}
for(j=0,k=1;j<n && k<n;k++)
{
a[j]=a[j]+a[k];
}
cout<<"the sum is "<<a[j];
}

