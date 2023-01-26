#include<stdio.h>
int main()
{
	int quantity;
	double rate,bill;
	printf("Enter rate of 1 samosa : ");
	scanf("%lf",&rate);
	
	printf("Enter quantity of samosa : ");
	scanf("%d",&quantity);
	
	bill=rate*quantity;
	
	printf("\nYou have to pay %.2lf Rs for %d samosa as 1 samosa costs %.2lf Rs",bill,quantity,rate);
	return 0;
}
