#include<stdio.h>
int main()
{
	int m1[2][3],m2[3][2],m3[2][2]={0},i,j,k;
	printf("Enter values in first matrix\n");
	for(i=0;i<2;i++)
	{	for(j=0;j<3;j++)
		{	scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter values in second matrix\n");
	for(i=0;i<3;i++)
	{	for(j=0;j<2;j++)
		{	scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<2;i++)	
	{	for(j=0;j<2;j++)
		{	for(k=0;k<3;k++)
			{	m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
			}
		}
	}
	
	printf("Resultant matrix\n");
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{	printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}













