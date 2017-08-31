using namespace std;
#include<iostream>
class test
{
private:
float a;
float b;
char opr;
public:
void put()
{	
cout<<"enter the two numbers";
cin>>a>>b;
}
void get()
{
cout<<"enter the operator";
cin>>opr;
switch(opr)
{
case '+':
cout<<"addition  "<<a+b;
break;
case '-':
cout<<"subtraction = "<<a-b;
break;
case '*':
cout<<"multiplication = "<<a*b;
break;
case '/':
cout<<"division = "<<a/b;
break;
}
}
};
int main()
{
test a;
a.put();
a.get();
}

