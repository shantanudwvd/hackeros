using namespace std;
#include<iostream> 
#include<cstring> 
int main() 
{ 
   char str[100], substr[100]; 
   int i,j,n,l;
   cout<<" Enter the main string: ";
   gets(str); 
   cout<<"Enter the position from which to start the substring: "; 
   cin>>n;
   cout<<"Enter the lenght of string: ";
   cin>>l;
   for(i=0,j=n;i<l;i++,j++)
   {
   	substr[i]=str[j];
   }
   cout<<"\n"<<substr<<endl;
}
    
