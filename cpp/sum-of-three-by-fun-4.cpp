#include<iostream>
using namespace std;

int sum(int,int,int);

int main()
{
	int a,b,c,t;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	t=sum(a,b,c);
	cout<<"\nSum of three numbers is "<<t;
	return 0;
}

int sum(int x,int y,int z)
{
	int s=x+y+z;
	return s;
}



