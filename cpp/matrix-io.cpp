#include<iostream>
using namespace std;
int main()
{
	int m[3][3],i,j;
	cout<<"Enter values in matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>m[i][j];
		}
	}
	
	cout<<"Matrix is\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	cout<<m[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
