#include<iostream>
using namespace std;
class Circle
{
	int radius;
	double area,circ;
	public:
	Circle()
	{
		cout<<"\nEnter radius of circle : ";
		cin>>radius;
		area=3.14*radius*radius;
		circ=2*3.14*radius;
	}
	void printdetails()
	{	cout<<"\nDetails of circle are\n";
		cout<<"\nRadius : "<<radius<<"\nArea : "<<area<<"\nCircumeference : "<<circ;
	}
};
int main()
{
	Circle c1,c2;
	c1.printdetails();
	c2.printdetails();
	return 0;
}
