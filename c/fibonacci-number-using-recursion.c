#include<stdio.h>
int fib(int n)
{	if(n<=1)
		return n;
	
	return fib(n-1)+fib(n-2);		
}
int main()
{
	int n,f;
	printf("Enter n : ");
	scanf("%d",&n);
	f=fib(n);
	printf("%d fibonacci number is %d",n,f);
	return 0;	
}
