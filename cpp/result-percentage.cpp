#include<iostream>
using namespace std;
int main()
{
	double per;
	cout<<"Enter perecentage : ";
	cin>>per;
	if(per>100||per<0)
		cout<<"Invalid input! Percentage must be between 0-100";
	else if(per>=60)
		cout<<"Congrats! you got first division";
	else if(per>=48)
		cout<<"Congrats! you got second division";
	else if(per>=36)
		cout<<"Congrats! you got third division";
	else
		cout<<"Hard luck! you got failed this time, try again";
	return 0;
}
