using namespace std;
#include<iostream>
int add();
int main()
{
int ans;
ans=add();
cout<<"addition is "<<ans;
}
int add()
{
int a,b;
cout<<"enter two numbers";
cin>>a>>b;
return (a+b);
}
