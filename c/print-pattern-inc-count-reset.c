#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",count);
			count++;
			if(count==10)
				count=0;
		}
		printf("\n");
	}
	return 0;
}
