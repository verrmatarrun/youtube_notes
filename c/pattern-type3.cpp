#include<iostream>
using namespace std;
int main()
{	int i,j;
	for(i=1;i<=5;i++)
	{	for(j=5;j>i;j--)
		{	cout<<" ";
		}
		for(j=1;j<=i;j++)
		{	cout<<j;
		}
		for(j=i-1;j>=1;j--)
		{	cout<<j;
		}
		cout<<"\n";		
	}
	return 0;
}
/*
 i=1,5	j=5,i  j=i,>=1  j=2,j<=i
  i=1,5 j=1,<i j=5,>=i  j=i+1, <=5

    1
   212
  32123
 4321234
543212345

543212345
 5432345
  54345
   545
    5
*/
i=1,5		5,1             1,5     1,5        1,5   1,5
	j=5,i   1,i-5           5,i		5,i		   5,1	  1,i
	j=1,i   1,i				i,1		5,i		   i,1	  5,i
	j=5,i   5,i				1,i		i+1,5	   
