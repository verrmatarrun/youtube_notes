#include<iostream>
using namespace std;
int main()
{	
	char i,j;
	for(i='E';i>='A';i--)
	{
		for(j='A';j<i;j++)
		{	cout<<"*";
		}
		for(j='E';j>=i;j--)
		{	cout<<j;
		}
		for(j=i+1;j<='E';j++)
		{	cout<<j;
		}
		for(j='A';j<i;j++)
		{	cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
