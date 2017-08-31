using namespace std;
#include<iostream>
int main()
{
	int x,i,count=0,n;
	int a[100];
	cout<<"Enter the number you want to search in the array: ";
	cin>>x;
	cout<<"Enter the no. of elements you want to input: ";
	cin>>n;
	cout<<"Enter the elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;)
	{
		if(a[i]==x)
		{
			cout<<"the pos of the element is "<<x;
			count++;
			break;
		}
		else 
		i++;
	}
	if(count==0)
	{
		cout<<"\n The elements does not exist in the array ";
	}
}
