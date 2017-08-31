using namespace std;
#include<iostream>
void update(int *c,int *d)
{
	cout<<*c<<"\n"<<*d;
}
int main()
{
	int a,b;
	int *pa = &a, *pb = &b;
	cin>>a;
	cin>>b;
	update(pa,pb);
}
