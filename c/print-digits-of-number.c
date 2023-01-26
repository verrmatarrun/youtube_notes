#include<stdio.h>
#include<math.h>
int main()
{
	int n ,temp,count=0,p;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{	count++;
		temp=temp/10;
	}
	p=pow(10,count-1);
	
	while(p!=0)
	{	printf("%d\n",n/p);
		n=n%p;
		p=p/10;
	}
	return 0;
}
