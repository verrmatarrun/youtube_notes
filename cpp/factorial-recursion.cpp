#include<iostream>
using namespace std;

int fact(int n)
{	if(n==0)
		return 1;
	int nm1f=fact(n-1);
	int f=n*nm1f;
	return f;
}

int main()
{
	int n,f;
	cin>>n;
	f=fact(n);
	cout<<"Factorial of "<<n<<" is "<<f;
}
