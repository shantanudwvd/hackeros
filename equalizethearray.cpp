using namespace std;
#include<iostream>
#include<map>
#include<iterator>
int main()
{
	map<string,int>m;
	//int n;
	//cin>>n;
	m.insert(make_pair("hello",9));
	map<string,int>::iterator itr=m.find("hello");

}


