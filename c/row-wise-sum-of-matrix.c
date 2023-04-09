#include<stdio.h>
int main()
{
	int m[3][3],i,j,sum;
	printf("\nEnter values in a 3X3 matrix\n");
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	scanf("%d",&m[i][j]);
		}
	}
	printf("\nRow wise sum of matrix is \n");
	for(i=0;i<3;i++)
	{	sum=0;
		for(j=0;j<3;j++)
		{	printf("%d ",m[i][j]);
			sum=sum+m[i][j];
		}
		printf(" = %d\n",sum);		
	}	
	return 0;
}
