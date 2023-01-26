#include<stdio.h>
int main()
{
	float n1,n2,n3,m;
	printf("Enter first number : ");
	scanf("%f",&n1);
	printf("Enter second number : ");
	scanf("%f",&n2);
	printf("Enter third number : ");
	scanf("%f",&n3);
	
	m=n1*n2*n3;
	printf("The multiply of three numbers is %.2f",m);
	return 0;
}
