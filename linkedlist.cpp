using namespace std;
#include<iostream>
struct node 
{
	int data;
	struct node *next;
};
int main()
{
    int i,n;
	node *p;
	cout<<"enter the size of linked list: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>p->data;
		p=p->next;
	}
	for(i=1;i<=n;i++)
	{
		cout<<p->data<<"\n";
		p=p->next;
	}
}
