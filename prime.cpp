using namespace std;
#include<iostream>
class test
{
int n;
public:
void get()
{
cout<<"Enter the number ";
cin>>n;
}
void put()
{
for(int i=0;i<1 && n>=2;i++)
{
if (n==2)
cout<<"It is a least prime number";
else if(n%2==0)
cout<<"It is not a prime number";
else
cout<<"It is a prime number";
}
}
};
int main()
{
test t1;
t1.get();
t1.put();
}
