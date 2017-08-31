using namespace std;
#include<iostream>
int main()
{
	int a[100];
	int c1=0,c2=0,n,j,k;
   //cout<<"Enter the number of games: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0,k=1;k<n;j++,k++)
    {
        if(a[k]>a[j])
        {
        	c1++;
        }
        else 
        {
        	a[k]=a[j];
		}
	}
	cout<<c1;
}

