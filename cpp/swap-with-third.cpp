#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\nEnter value of a ";
	cin>>a;
	
	cout<<"\nEnter value of b : ";
	cin>>b;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"\nAfter swapping\na is "<<a<<"\nb is "<<b;
	return 0;
	
}
