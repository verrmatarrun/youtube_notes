#include<stdio.h>
int main()
{
	int m[2][3],sum[3]={0},i,j;
	printf("\nEnter values in matrx of 2X3");
	for(i=0;i<2;i++)
	{	for(j=0;j<3;j++)
		{	scanf("%d",&m[i][j]);
		}
	}
		
	for(i=0;i<3;i++)
	{	
		for(j=0;j<2;j++)
		{	sum[i]=sum[i]+m[j][i];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m[i][j]);
		printf("\n");
	}
	printf("--------------------------------\n");
	for(i=0;i<3;i++)
		printf("%d\t",sum[i]);
	
	return 0;
}
