#include<iostream>
using namespace std;
class Triangle
{
	int base,height;
	float area;
	public:
		Triangle()
		{	cout<<"Enter base : ";	cin>>base;
			cout<<"Enter height : ";	cin>>height;
			area=0.5*base*height;
		}
		void print()
		{
			cout<<"\nDetails of traingle are \n";
			cout<<"\nBase : "<<base<<"\nHeight : "<<height<<"\nArea : "<<area;
		}
};

int main()
{
	Triangle t1;
	t1.print();
	return 0;
}
