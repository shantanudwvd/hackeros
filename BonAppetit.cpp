using namespace std;
#include<iostream>
int main()
{
    int c[100000];
    int n,k,a;
    int bactual,bcharged;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    a=c[k];
    cin>>bcharged;
    for(int i=0,j=1;i<n && j<n;i++,j++)
    {
        c[j]=c[i]+c[j];
    }
    //cout<<c[n-1]<<endl;
    bactual=(c[n-1]-a)/2;
    if(bcharged==bactual)
        cout<<"Bon Appetit";
    else 
    {
        cout<<(bcharged-bactual);
    }
}
