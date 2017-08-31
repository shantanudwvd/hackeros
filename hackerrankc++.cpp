using namespace std;
#include<iostream>
int main()
{
int n,m;
cout<<"Enter the range";
cin>>n>>m;
for(int i=8;i<=9;i++)
{
if(i==8)
cout<<"eight";
else if(i==9)
cout<<"\n nine";
}
for(int j=10;j>=9 && j<=11;j++)
{
if(j%2==0)
cout<<"\n even";
else 
cout<<"\n odd";
}
}

