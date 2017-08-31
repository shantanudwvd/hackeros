using namespace std;
#include<iostream>
int main()
{
	int a[100],b[100];
    int n,d;
    cin>>n;
    cin>>d;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(int i=0,j;i<n;i++)
	{
		if(i==0)
		{
			j=n-d;
			b[j]=a[i];
		}
		else if(i==d)
		{
			j=i-d;
			b[j]=a[i];
		}
		else 
		{ 
			j=(n-d+i);
            if(j>n)
            {
                j=i-n;
                b[j]=a[i];
            }
            else
            {
                j=(n-d+i);
                b[j]=a[i];
            }
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}
