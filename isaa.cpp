using namespace std;
#include<iostream>
int main()
{
	int a[1000],c[1000];
	int l=1,count=0,q;
	cin>>q;
	for(int p=0,n;p<q;p++)
	{
		int flag=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=0,k=1,x,m;k<=n-1;j++,k++)
		{
			if(a[j]>a[k])
			{
				x=a[j];
				a[j]=a[k];
				a[k]=x;
				m=j;
				count++;
				flag++;
				c[p]=count;
				for(;(m-l)>=0;m--)
				{	
					if(a[m]<a[m-l])
					{
						x=a[m];
						a[m]=a[m-l];
						a[m-l]=x;
						count++;
						flag++;
						c[p]=count;
					}
					else 
					break;
				}
			}
			else if(a[j]<a[k]);
		}
		if(flag==0)
		{
			c[p]=0;
		}
	}
	for(int p=0;p<q;p++)
	{
		cout<<c[p]<<"\n";
	}
}


