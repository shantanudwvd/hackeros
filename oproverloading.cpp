using namespace std;
#include<iostream>
class test
{
int a,b,c;
public:
void getdata(int x,int y,int z)
{
a=x;
b=y;
c=z;
}
void operator -()
{
a=-a;
b=-b;
c=-c;
}
void disp()
{
cout<<"\n value of A "<<a;
cout<<"\n value of B "<<b;
cout<<"\n value of C "<<c;
}
};
int main()
{
test obj;
obj.getdata(-10,20,30);
obj.disp();
-obj;
obj.disp();
}
