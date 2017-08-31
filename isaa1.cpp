using namespace std;
#include<iostream>
int main()
{
int a[1000],b[1000];
int n,i,j,x,k,m;
int l=1,count;
int p,q,r;
cin>>q;
for(p=0,r=0;p<q;p++,r++)
{	
count=0;
cin>>n;
//INPUT THE ARRAY ELEMENTS
for(i=0;i<n;i++)
{
cin>>a[i];
}
//COMPARISON LOOP
for(j=0,k=1;k<=n-1;j++,k++)
{
if(a[j]>a[k])
{
//FORWARD SWAPPING	
x=a[j];
a[j]=a[k];
a[k]=x;
count++;
m=j;
for(;(m-l)>=0;m--)
{	
if(a[m]<a[m-l])
{
//BACKWARD SWAPPING
x=a[m];
a[m]=a[m-l];
a[m-l]=x;
count++;
}
else 
break;
}
}
else if(a[j]<a[k]);
}	
b[r]=count;
}
for(r=0;r<q;r++)
{
cout<<"\n"<<b[r];
}
}
