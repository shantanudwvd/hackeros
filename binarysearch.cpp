using namespace std;
#include<iostream>
int main()
{
	int a[1000];
	int mid,low,high;
	int arr,n,i;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"Enter the size of array: ";
	cin>>arr;
	cout<<"Enter elements: ";
	for(i=0;i<arr;i++)
	{
		cin>>a[i];
	}
	for(low=0,high=arr-1;;)
	{
		mid=(low+high)/2;
		if(a[mid]<n)
		{
			low=mid+1;
		}
		else if(a[mid]>n)
		high=mid-1;
		else if(a[mid]==n)
		{
			cout<<"The position of number is: "<<mid;
			break;
		}
	}
}
