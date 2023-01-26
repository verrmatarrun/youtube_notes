#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\nEnter value of a ";
	cin>>a;
	
	cout<<"\nEnter value of b : ";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\nAfter swapping\na is "<<a<<"\nb is "<<b;
	return 0;
	
}
