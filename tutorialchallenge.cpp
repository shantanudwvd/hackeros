using namespace std;
#include<iostream>
int main()
{
int a[1000];
int i,n,x;
cout<<"enter the value of element whose postion you want to find";
cin>>x;
cin>>n;
cout<<"enter the sorted array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
if(x==a[i])
break;
else;
}
cout<<"\n"<<i;
}
