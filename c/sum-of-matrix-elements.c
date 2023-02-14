#include<stdio.h>
int main()
{
	int m[2][3],i,j,sum=0;
	printf("Enter values in the matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+m[i][j];
		}
	}
	
	printf("\nSum of matrix elements is %d",sum);
	return 0;
	
}
