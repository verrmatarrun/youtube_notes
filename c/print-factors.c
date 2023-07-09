#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter an integer : ");
	scanf("%d",&n);
	
	printf("\nDivisors of %d are\n",n);
	
	i=1;
	while(i<=n)
	{	if(n%i==0)
		{	printf("%d ",i);
		}
		i++;
	}
	return 0;
}
