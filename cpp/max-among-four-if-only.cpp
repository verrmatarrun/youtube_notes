#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,max;
	cout<<"Enter 4 numbers\n";
	cin>>a>>b>>c>>d;
	
	max=a;
	
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	
	cout<<"Maximum among "<<a<<","<<b<<","<<c<<", and "<<d<<" is "<<max;
	return 0;
}
