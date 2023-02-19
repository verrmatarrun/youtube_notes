#include<stdio.h>
void printmatrix(int m[][3],int rows)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<3;j++)
		{	printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int mat[3][3]={1,2,3,4,5,6,7,8,9};
	printmatrix(mat,2);
	return 0;
}

