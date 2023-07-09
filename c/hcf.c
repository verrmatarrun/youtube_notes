#include<stdio.h>
int main()
{
	int n1,n2,hcf;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	
	hcf=n1<n2?n1:n2;
	while (hcf>=1)
	{
		if(n1%hcf==0 && n2%hcf==0)
			break;
		hcf--;
	}
	
	printf("\nThe hcf of %d and %d is %d",n1,n2,hcf);
	return 0;
}
