using namespace std;
#include<iostream>
int main()
{
int a[10],b[10],c[10],d[10];
int i,j,k,l;
for(i=0;i<3;i++)
{
cin>>a[i];
}
for(j=0;j<3;j++)
{
cin>>b[j];
}
for(i=0,j=0,k=0,l=0;i<3 && j<3;i++,j++,k++,l++)
{
if(a[i]>b[j])
{
c[k]=1;
d[k]=0;
}
else if(a[i]<b[j])
{
c[k]=0;
d[k]=1;
}
else if(a[i]==b[j])
{
c[k]=0;
d[k]=0;
}
}
c[1]=c[0]+c[1];
c[2]=c[2]+c[1];
d[1]=d[0]+d[1];
d[2]=d[2]+d[1];
cout<<c[2]<<" "<<d[2];
}
