#include<stdio.h>
int main()
{
	int radius;
	float area;
	
	printf("Enter radius of the circle : ");
	scanf("%d",&radius);
	
	area=3.14*radius*radius;
	
	printf("Area of circle with radius %d is %f",radius,area);
	return 0;
}
