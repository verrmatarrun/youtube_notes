#include<stdio.h>
int main()
{
	
	int n,i,t;
	printf("Enter an integer : ");
	scanf("%d",&n);
	t=n;
	printf("\nPrime factors of %d are as follows\n",n);	
	i=2;
	while(t>1)
	{	if(t%i==0)
		{	printf("%d ",i);
			t=t/i;
		}
		else
		{	i++;	}
	}	
	return 0;
}
