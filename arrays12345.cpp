using namespace std;
#include<iostream>
int main()
{
int a[5];
int i,j,x;
cout<<"enter elements:";
for(i=0;i<5;i++)
{
cin>>a[i];
}
for(i=0,j=1;i<j;j++)
{
if(a[i]>a[j] && j<5)
{
x=a[i];
a[i]=a[j];
a[j]=x;

}
else if(a[i]<a[j] || j>=5)
{
i++;
j=i+1;
}
}
for(i=0;i<5;i++)
{
cout<<"\n"<<a[i];
}
}
