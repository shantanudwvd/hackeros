using namespace std;
#include<iostream>
#include<cstring>
int main()
{
char str[100];
char str1[100];
char str2[100];
int x,i;
cin>>str;
cin>>str1;
for(i=0;i<=strlen(str);i++)
{
str2[i]=str[i];
}
cout<<strlen(str)<<" "<<strlen(str1);
strcat(str,str1);
cout<<"\n"<<str;
x=str2[0];
str2[0]=str1[0];
str1[0]=x;
cout<<"\n"<<str2<<" "<<str1;
}
