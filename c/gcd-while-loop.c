#include<stdio.h>
int main()
{
	int n1,n2,rem;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	while(n1%n2!=0)
	{	rem=n1%n2;
		n1=n2;
		n2=rem;
	}
	printf("GCD is %d",n2);
	return 0;
}
