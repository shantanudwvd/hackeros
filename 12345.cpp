using namespace std;
#include<iostream>
void fact(int,char);
int main()
{
int a,b;
char opr;
cout<<"Enter two numbers you wish to add";
cin>>a>>b;
cout<<"Enter operator";
cin>>opr;
fact(a,b);
fact(opr);
}
void fact(char p,int c)
{
switch(p)
{
case '+':
c=a+b;
break;;
case '-':
c=a-b;
break;
case '*':
c=a*b;
break;
case '/':
c=a/b;
break;
}
cout<<"answer is %d"<<c;
}











}
	
	
	
	
	
	
	
	
}
