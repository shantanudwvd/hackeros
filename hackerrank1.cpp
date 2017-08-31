using namespace std;
#include<iostream>
int main()
{
int a[10];
int n,i,j,k;
cout<<"How many numbers you want to add";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the number";
cin>>a[i];
}
for(j=0,k=1;j<n && k<n;k++)
{
a[j]=a[j]+a[k];
}
cout<<"sum of numbers is "<<a[j];
}
