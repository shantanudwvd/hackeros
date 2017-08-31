using namespace std;
#include<iostream>
#include<cstring>
int main()
{
int a[100];
int i,p,swap;
int j,k,n;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
p=a[n-1];
for(l=0;l<n;l++)

for(j=0,k=n-2;j<k;)
{
if(a[j]>p && a[k]<p)
{
swap=a[j];
a[j]=a[k];
a[k]=swap;
j++;
k--;
}
else if(a[j]<p)
j++;
else if(a[k]>p)
k--;
}
swap=a[j+1];
a[j+1]=a[n-1];
a[n-1]=swap;
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
