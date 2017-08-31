using namespace std;
#include<iostream>
int main()
{
int a,n,i,r=0;
cout<<"enter digits";
cin>>a;
cout<<"Enter number";
cin>>n;
for(i=0;i<=a;i++)
{
r=r*10;
r=r+n%10;
n=n/10;
}
cout<<"reverse number is "<<r;
}
