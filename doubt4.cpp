using namespace std;
#include<iostream>
#include<cstring>
int main()
{
char str[10];
int i;
char str1[10];
cin>>str;
for(i=0;i<=strlen(str);i++)
{
str1[i]=str[i];
}
cout<<"string is"<<str1;
}
