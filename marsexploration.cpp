using namespace std;
#include<iostream>
#include<cstring>
int main()
{
	string s;
	char a[100],b[3];
	int i,j,k=0;
	int count=0;
	cout<<"Enter the string: ";
	cin>>s;
	b[0]='S';b[1]='O';b[2]='S';
	for(i=0,j=0;i<s.length();i=i+3)
	{
		if(s[i]=='S' && s[i+1]=='O' && s[i+2]=='S')
		{
			k=k+3;
		}
		else
		{
		 	for(int l=0;l<3;k++,l++)
			{ 
				if(s[k]!=b[l])
				{
				//	a[j]=s[k];
				//	j++;
					count++;
				}
			}
		}	
	}
//	for(j=0;j<count;j++)
//	{
//		cout<<a[j];
//	}
	cout<<count;
}
