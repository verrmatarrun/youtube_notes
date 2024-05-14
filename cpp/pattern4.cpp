#include<iostream>
using namespace std;
int main()
{
	int i,j,k=7;
	for(i=1;i<=10;i++)
	{
		if(i==1||i==10)
		{	for(j=1;j<=9;j++)
				cout<<"-";
		}
		else if(i<=5)
		{
			for(j=5;j>=i;j--)
				cout<<"-";
			for(j=1;j<=(i-1)*2-1;j++)
				cout<<"^";
			for(j=5;j>=i;j--)
				cout<<"-";
		}
		else
		{	for(j=5;j<i;j++)
				cout<<"-";
			for(j=1;j<=k;j++)
				cout<<"+";
			for(j=5;j<i;j++)
				cout<<"-";
			k=k-2;
		}
		cout<<"\n";
	}
	return 0;
}
