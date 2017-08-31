using namespace std;
#include<iostream>
class emp
{
int empno;
char empnam[50];
static int empcnt;
public:
void get()
{
empno=100+empcnt;
empcnt++;
cout<<"Enter name";
cin>>empnam;
}
void put()
{
cout<<"Employee No. "<<empno<<endl;
cout<<"Name : "<<empnam<<endl;
}
};
int emp::empcnt;
int main()
{
emp e[5];
int i;
for(i=0;i<5;i++)
{
e[i].get();
}
for(i=0;i<5;i++)
{
e[i].put();
}
}
