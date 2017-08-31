using namespace std;
#include<iostream>
int main()
{
	int a[100],b[5];
	int n,count=0;
	cout<<"Enter the elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b[0]=1;b[1]=2;b[2]=3;b[3]=4;b[4]=5;
	for(int i=0,j=0;i<n;i++,j=i+1)
	{
		for(;j<5;j++)
		{
			if(a[i]==b[j])
			{
				count++;
			}
		}
	}
	cout<<count;
}
