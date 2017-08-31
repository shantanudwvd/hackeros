using namespace std;
#include<iostream>
#include<cmath>
int main()
{
    int a[1000],b[1000];
    int c1=0,c2;
    int s,n,m;
    cin>>s;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    c1=abs(s-(a[0]+b[0]));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(s-(a[i]+b[j]))<=c1)
            {
                c1=abs(s-(a[i]+b[i]));
            }
        }
     }
    cout<<c1;
}
