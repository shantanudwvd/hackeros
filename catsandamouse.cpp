using namespace std;
#include<iostream>
#include<cmath>
int main()
{
	int A,B,C,q,i;
	cout<<"Enter queries: ";
	cin>>q;
	for(i=0;i<q;i++)
	{		
		cin>>A;
		cin>>B;
		cin>>C;
		if(abs(B-C)==abs(C-A))
		{
			cout<<"Mouse C"<<endl;
		}
		else if(abs(C-B)<abs(C-A))
		{
			cout<<"Cat B"<<endl;
		}
		else if(abs(C-A)<abs(C-B))
		{
			cout<<"Cat A"<<endl;
		}
	}
}
