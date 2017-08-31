using namespace std;
#include<iostream>
int main()
{
int n,m;
cin>>n>>m;
for( int i=1;i<=9;i++)
{
if(i>=n && i<=m)
{
if(i==1)
cout<<"one"<<"\n";
else if(i==2)
cout<<"two"<<"\n";
else if(i==3)
cout<<"three"<<"\n";
else if(i==4)
cout<<"four"<<"\n";
else if(i==5)
cout<<"five"<<"\n";
else if(i==6)
cout<<"six"<<"\n";
else if(i==7)
cout<<"seven"<<"\n";
else if(i==8)
cout<<"eight"<<"\n";
else if(i==9)
cout<<"nine"<<"\n";
}
else;
}
for(int j=10;j<=m;j++)
{
if(j%2==0)
cout<<"even"<<"\n";
else 
cout<<"odd"<<"\n";
}
}


