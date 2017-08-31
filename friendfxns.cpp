using namespace std;
#include<iostream>
class A;
class B
{
int b;
public:
void getval(int x)
{
b=x;
}
void putval()
{
cout<<"\n value of B = "<<b;
}
friend void add(A,B);
};
class A
{
int a;
public:
void getval(int x)
{
a=x;
}
void putval()
{
cout<<"\n value of A = "<<a;
}
friend void add(A,B);
};
void add(A ob1,B ob2)
{
cout<<"\n addition of A & B"<<ob1.a+ob2.b;
}
int main()
{
A a;
B b;
a.getval(100);
b.getval(200);
a.putval();
b.putval();
add(a,b);
}
