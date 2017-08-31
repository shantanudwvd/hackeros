using namespace std;
#include<iostream>
class test
{
int no;
static int count;
public:
void getval(int x)
{
no=x;
cout<<"\n Number = "<<no;
count++;
}
void dispcount()
{
cout<<"\n counter = "<<count;
}
};
int test::count;
int main()
{
test t1,t2,t3;
t1.dispcount();
t2.dispcount();
t3.dispcount();
t1.getval(100);
t2.getval(200);
t3.getval(300);
t1.dispcount();
t2.dispcount();
t3.dispcount();
}
