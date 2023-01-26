#include<iostream>
using namespace std;
int main()
{
	int n1,n2,rem;
	cout<<"Enter two numbers\n";
	cin>>n1>>n2;
	
	while(n1%n2!=0)
	{	rem=n1%n2;
		n1=n2;
		n2=rem;
	}
	cout<<"GCD is "<<n2;
	return 0;
}
