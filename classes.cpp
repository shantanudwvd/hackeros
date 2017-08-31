using namespace std;
#include<iostream>
class student
{
int a,b;
char str1[500];
char str2[500];
public:
int get_age()
{
cin>>a;
}
int set_age()
{

cout<<"\n"<<a;
}
int get_firstname()
{
cin>>str1;
}
int set_firstname()
{
cout<<","<<str1;
}
int get_lastname()
{
cin>>str2;
}
int set_lastname()
{
cout<<","<<str2;
}
int get_standard()
{
cin>>b;
}
int set_standard()
{
cout<<","<<b;
}
int output()
{
cout<<a<<"\n";
cout<<str2;
cout<<","<<str1;
cout<<"\n"<<b<<endl;
}
};
int main()
{
student s;
s.get_age();
s.get_firstname();
s.get_lastname();
s.get_standard();
s.output();
s.set_age();
s.set_firstname();
s.set_lastname();
s.set_standard();
}
