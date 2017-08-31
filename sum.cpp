using namespace std;
#include<iostream>
int sum(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
int main()
{
int c,d,i;
cout<<"enter the value of a and b";
cin>>c>>d;
i=sum(c,d);
cout<<"sum is="<<i;
}
