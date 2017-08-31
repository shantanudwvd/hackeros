using namespace std;
#include<iostream>
int main()
{
int a[100][100];
int i,j,n;
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
}
}
