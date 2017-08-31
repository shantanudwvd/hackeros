using namespace std;
#include<iostream>
#include<string>
int main()
{
    string str;
	int j,k;                                             
	cout<<"Enter String: ";
	cin>>str;
    for(j=0,k=1;j<str.length();)
    {
    	if(str[j]==str[k])
    	{
    		str.erase(j,2);
    		j=0;
    		k=1;
		}
		else
		{
			j++;
			k++;
		}
	}
	if(str.length()==0)
	cout<<"Empty String";
	else
	cout<<str;
}
