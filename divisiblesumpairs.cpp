using namespace std;
#include<iostream>
int main()
{
    int a[100];
    int n,k,j=1,div;
    int count=0;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
    for(int i=0;i<n;i++,j=i+1)
    { 
        for(;j<n;j++)
        {
            div=(a[i]+a[j]);
            if(div%k==0)
            {
                count++;
            } 
        }
    }
    cout<<count;
}
