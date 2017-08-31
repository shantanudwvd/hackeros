using namespace std;
#include<iostream>
fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		cout<<n;
		fun(n-1);
	}
}
int main()
{
	int a;
	fun(3);
}
