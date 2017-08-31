using namespace std;
#include<iostream>
int main()
{
	int a,b;
	char opr;
	cout<<"enter two numbers: ";
	cin>>a;
	cin>>b;
	cout<<"enter the operation to perform: ";
	cin>>opr;
	switch(opr)
	{
		case '+':
			{
				cout<<a+b;
				break;
			}
		case '-':
		    {
		    	cout<<a-b;
		    	break;
			}	
	}
	
}
