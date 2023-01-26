#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter an alphabet : ";
	cin>>ch;
	if(ch>='A'&&ch<='Z')
		cout<<"You entered capital alphabet ";
	else if(ch>='a'&&ch<='z')
		cout<<"You entered small alphabet ";
	else
		cout<<"You entered othen than alphabet";
	return 0;
}
