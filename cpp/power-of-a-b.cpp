#include<iostream>
using namespace std;
int main()
{
	int a,b,pow=1,i;
	cout<<"Enter base : ";
	cin>>a;
	cout<<"Enter exponent : ";
	cin>>b;
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	cout<<a<<" ki power "<<b<<" is "<<pow;
	return 0;
}
