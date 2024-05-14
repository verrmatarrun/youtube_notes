#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	
	if(ch>='A'&&ch<='Z')
	{	ch=ch+32;
	}
	else if(ch>='a'&&ch<='z')
	{	ch=ch-32;
	}
	cout<<"Output : "<<ch;
	return 0;
}
