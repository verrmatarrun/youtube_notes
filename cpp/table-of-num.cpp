#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter an integer : ";
	cin>>num;
	
	cout<<"\nTable of "<<num<<" is\n";
	for(i=1;i<=10;i++)
	{
		cout<<num*i<<" ";
	}
	return 0;
}
