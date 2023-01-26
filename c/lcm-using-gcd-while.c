#include<stdio.h>
int main()
{
	int n1,n2,rem,a,b,lcm;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	a=n1;
	b=n2;
	while(n1%n2!=0)
	{	rem=n1%n2;
		n1=n2;
		n2=rem;
	}
	lcm=a*b/n2;
	printf("GCD is %d",n2);
	printf("\nLCM is %d",lcm);
	return 0;
}
