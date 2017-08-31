using namespace std;
#include<iostream>
#include<cstring>
int main()
{
char str[50];
int n,i,j,count;
cout<<"Enter the given string:";
cin>>str;
n=strlen(str);
for(i=0,j=n-1,count=0;i<j;i++,j--)
{
count=0;
if(str[i]==str[j])
{
count=1;
}
else
break;
}
if(count==1)
cout<<"It is a pallindrome";
else 
cout<<"It is not a pallindrome";
}

