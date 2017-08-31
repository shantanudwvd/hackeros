using namespace std;
#include<iostream>
int main()
{
int a[1000],b[1000];
int n,i,j,x,k,m;
int l=1,count=0;
int p,q;
cin>>q;
for(p=0;p<q;p++)
{	
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(j=0,k=1;k<=n-1;j++,k++)
{
if(a[j]>a[k])
{
//FORWARD SWAPPING	
x=a[j];
a[j]=a[k];
a[k]=x;
count++;
/*PRINTING THE ARRAY AFTER FIRST SWAPPING
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;*/
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
/*PRINTING THE ARRAY AFTER SECOND SWAPPING
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;*/
}
else 
break;
}
}
else if(a[j]<a[k]);
}
for(;r<q;)
{
b[r]=count;	
r++;
}	
}
}

