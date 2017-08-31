using namespace std;
#include<iostream>
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int *pa = &a,*pb = &b;
	cout<<a;
	cout<<"\n"<<b;;
	cout<<"\n"<<*pa;
	cout<<"\n"<<*pb;
	cout<<"\n"<<pa;
	cout<<"\n"<<pb;
	cout<<"\n"<<&a;
	cout<<"\n"<<&b;
}
	int c;
	c = *a + *b;
	if(*a>*b)
	{
		*b = *a - *b;
	}
	else
	{
		*b = *b - *a;
	}
	*a=c;
