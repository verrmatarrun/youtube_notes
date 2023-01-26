#include<stdio.h>
int main()
{
	double c,f;
	printf("Enter temperature in centigrade : ");
	scanf("%lf",&c);
	
	f=1.8*c+32;
	printf("\nTemperature in farenhite is %.2lf",f);
	return 0;
}
