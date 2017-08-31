using namespace std;
#include<iostream>
int main()
{
	long int a[5];
	int k,x,flag=0;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];	
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0,k=1;k<5;j++,k++)
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
	cout<<(a[0]+a[1]+a[2]+a[3])<<" "<<(a[4]+a[3]+a[2]+a[1]);
}
