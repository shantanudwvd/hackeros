using namespace std;
#include<iostream>
class time
{
int h,m;
public:
void gettime(int x,int y)
{
h=x;
m=y;
}
void puttime()
{
cout<<"\n Hours = "<<h;
cout<<"\n minutes = "<<m;
}
void sum(time t1,time t2)
{
m=t1.m+t2.m;
h=m/60;
m=m%60;
h=h+t1.h+t2.h;
}
};
int main()
{
time t1,t2,t3;
t1.gettime(3,40);
t2.gettime(4,30);
t3.sum(t1,t2);
t1.puttime();
t2.puttime();
t3.puttime();
}
