using namespace std;
#include<iostream>
int main()
{
int a[4],b[1];
int i,j;
for(i=0;i<4;i++)
{
cout<<"Enter four numbers :";
cin>>a[i];
}
if(a[0]>a[1])
b[0]=a[0];
else
b[0]=a[1];
if(a[2]>b[0])
b[0]=a[2];
else
if(a[3]>b[0])
b[0]=a[3];
else
for(j=0;j<1;j++)
{
cout<<b[j];
}
}
