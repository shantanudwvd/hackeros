using namespace std;
#include<iostream>
#include<cmath>
int main()
{
	int l[100];
    int n,m=5;
    cout<<"Enter number of days: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	l[i]=floor(m/2);
    	m=l[i]*3;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<l[i]<<" ";
	}
	for(int i=1,j=2;i<=n && j<=n;i++,j++)
	{
		l[j]=l[i]+l[j];
	}
	
	cout<<l[n];
}
