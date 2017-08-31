using namespace std;
#include<iostream>
class test
{
private:
int objid;
static int count;
public:
void setid()
{
objid = ++count;
}
void showcount()
{
cout<<"\n No. of objects created = "<<count;
}
void showid()
{
cout<<"\n object-id = "<<objid;
}
};
test::showcount()
int main()
{
test t1;
t1.setid();
t1.showid();
test t2;
test t3;
t2.setid();
t3.setid();
t2.showid();
t2.showcount();
t3.showcount();
t3.showid();
t3.showcount();
}
