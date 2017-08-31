using namespace std;
#include<iostream>
int main()
{
	int n,a[n];
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the elements of the array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
}
