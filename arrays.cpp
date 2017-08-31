using namespace std;
#include<iostream>
int main()
{
int a[10],b[10];
int i,j,n;
cout<<"How many digits you want to input";
cin>>n;
for(i=0,j=n-1;i<n;i++,j--)
{
cout<<"Enter integer :";
cin>>a[i];
b[j]=a[i];
}
for(j=0;j<n;j++)
{
cout<<" "<<b[j];
}
}
