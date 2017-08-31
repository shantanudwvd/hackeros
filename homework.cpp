using namespace std;
#include<iostream>
class test
{
char nam[100];
int rno;
public:
void put(int x)
{
rno=x;
}
void get()
{
for(int i=0;i<=5;i++)
{
cout<<"Enter Name ";
cin>>nam;
cout<<"Name : "<<nam<<endl;
rno=rno+1;
cout<<"Roll nummber : "<<rno<<endl;
}
}
};
int main()
{
test t1;
t1.put(11501088);
t1.get();
}
