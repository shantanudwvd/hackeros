using namespace std;
#include<iostream>
#include<cstring>
int main()
{
int a[100];
int i,j=0,k;
int pivot,swap;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
pivot=a[j]
for(j=0,k=n-1;      )
{
if(pivot<a[k])
{
k--;
}
else if(pivot>a[k])
{
swap=a[j];
a[j]=a[k];
a[k]=swap;
pivot=a[k];
}
else if(pivot>a[j])
{
j++;
}

