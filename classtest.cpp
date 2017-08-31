using namespace std;
#include<iostream>
class alpha 
{
protected:
int a;
public:
alpha(int x)
{
a=x;
}
void showa()
{
cout<<"\n a ="<<a;
}
};
class beta
{
protected:
int b;
public:
beta(int y)
{
b=y;
}
void showb()
{
cout<<"\n b ="<<b;
}
};
class gamma:public alpha,public beta
{
int c,d;
public:
gamma(int m,int y,int o,int p):
alpha(m);
beta(n)
{
c=o;
d=p;
}
void show()
{
showa();
showb();
cout<<"\n d ="<<d;
cout<<"\n c ="<<c;
}
};
void main()
{
gamma g1(5,7,8,9)
g1.show();
}

