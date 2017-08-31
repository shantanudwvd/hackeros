using namespace std;
#include<iostream>
int main()
{
int a[100];
int i,x,n;
cin>>n;
for(i=0;i<6;i++)
{
cin>>a[i];
}
x=a[0]+a[1];
for(i=2;i<n;i++)
{
x=x+a[i];
}
cout<<x;
}

