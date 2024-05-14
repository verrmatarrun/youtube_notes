#include<iostream>
using namespace std;
class Demo
{	//private
	int d;		
	public:
	void setData(int x)
	{	d=x;
	}	
	void magic(Demo *dobj)
	{	cout<<"\n(Magic)the value is : "<<dobj->d;
		dobj->d=200;//changed the value				
		cout<<"\n(Magic)the value is : "<<dobj->d;
	}	
	void show()
	{	cout<<"\n(Show)The value is : "<<d;
	}		
};
int main()
{	Demo obj1,obj2;
	obj1.setData(100);
	obj2.setData(100);
	obj1.magic(&obj2);
	obj2.show();
	return 0;
}
