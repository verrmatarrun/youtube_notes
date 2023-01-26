#include<stdio.h>
int main()
{
	int num,digit,d,count=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter digit : ");
	scanf("%d",&digit);
	while(num!=0)
	{
		d=num%10;
		if(d==digit)
			count++;
		num=num/10;
	}
	printf("Frequency of %d is %d",digit,count);
	return 0;
}
