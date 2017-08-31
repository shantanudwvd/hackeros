using namespace std;
#include<iostream>
#include<cmath>
int lengthfunction(int number);
int main()
{
	int k,l,u,count=0,t;
	cin>>l;
	cin>>u;
	cin>>k;
	t=u-l;
	for(int i=0,r,m,c;i<=t && l<u;i++,l++)
	{
		r=0;
        m=l;
        c=lengthfunction(l);
		for(int j=0;j<c;j++)
		{
			r=r*10;
			r=r+m%10;
			m=m/10;
		}
		if(abs(l-r)%k==0)
		count++;
	}
	cout<<count;	
}
int lengthfunction(int number)
{    
      int counter=0;
      while(number)
     {        
            number=number/10;
            counter++;
      }
      return (counter);
}
