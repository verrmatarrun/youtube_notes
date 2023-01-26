#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n%d is positive integer",n);
	}
	else
	{
		if(n==0)
		{
			printf("\n%d is zero",n);
		}
		else
		{
			printf("\n%d is negative",n);
		}
	}
	return 0;
}
