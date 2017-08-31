using namespace std;
#include<iostream>
int main()
{
	int a[100];
	int n,i,j,max,count=0;
	cout<<"Enter the number of candles on the cake: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]>a[1])
	max=a[0];
	else 
	max=a[1];
	for(j=2;j<n;j++)
	{
		if(max<a[j])
		{
			max=a[j];
		}
		else;
	}
	//cout<<max;
	for(int k=0;k<n;k++)
	{
		if(a[k]==max)
		{
			count++;
		}
		else;
	}
	cout<<count;
}

	
