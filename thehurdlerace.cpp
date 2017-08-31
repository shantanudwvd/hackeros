using namespace std;
#include<iostream>
int main()
{
	int n,k,count=0,flag;
	int a[100];
	cout<<"Enter the number of hurdles: ";
	cin>>n;
	cout<<"Enter the maximum height he can jump without consuming any beverage: ";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		if(a[j]>k)
		{
			k=k+1;
			count=count+1;
			for(;;)
			{
				if(a[j]>k)
				{
					k=k+1;
					count=count+1;
				}
				else
				break;
			}
		}
		else
		{
			flag++;
		}
	}
	if(flag==0)
	{
		count=0;
		cout<<count;
	}
	else 
	cout<<count;
}
