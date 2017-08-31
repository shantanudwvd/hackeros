using namespace std;
#include<iostream>
int main()
{
int a[5];
int i,j,x;
cout<<"enter elements:";
for(i=0;i<5;i++)
{
cin>>a[i];
}
for(i=0;i<j;i++)
{
for(j=i+1;i<j && j<5;j++)
{
if(a[i]>a[j])
{
x=a[i];
a[i]=a[j];
a[j]=x;
}
else if(a[i]<a[j]);
}
}
cout<<"sorted elements are";
for(i=0;i<5;i++)
{
cout<<"\n"<<a[i];
}
}

