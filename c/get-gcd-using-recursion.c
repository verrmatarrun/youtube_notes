#include<stdio.h>

int get_gcd(int a,int b)
{	if(a%b==0)
		return b;
	int rem=a%b;
	int gcd=get_gcd(b,rem);
	return gcd;
}
int main()
{
	int n1,n2,gcd;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	gcd=get_gcd(n1,n2);
	printf("GCD of %d and %d is %d",n1,n2,gcd);
	return 0;
}
