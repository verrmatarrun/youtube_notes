#include<stdio.h>
int iseven(int num)
{	return num%2==0;
}
int main()
{	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);	
	if(iseven(n))
	{	printf("%d is even",n);
	}
	else
	{	printf("%d is odd",n);
	}
	return 0;
}
