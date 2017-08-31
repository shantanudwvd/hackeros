using namespace std;
#include<iostream>
int main()
{
	int a[100];
	int n,count=0;
	//cout<<"Enter the elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0,flag=0;i<n;i++)
	{
		for(int j=0,k=1,x;k<n;j++,k++)
		{
			if(a[j]>a[k])
			{
				x=a[j];
				a[j]=a[k];
				a[k]=x;
				flag++;
			}
			else if(a[j]<a[k]);
		}
		if(flag==0)
		break;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}	
	for(int i=0,j=1;i<n;)
	{
		if(a[i]==a[j])
		{
			count++;
			i=j+1;
			j=i+1;
		}
		else
		{
			i++;j++;
		}
	}
	cout<<count;
}

