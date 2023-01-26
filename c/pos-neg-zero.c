#include<stdio.h>
int main()
{	int n,res;
	printf("Enter an integer : ");
	res=scanf("%d",&n);
	switch(res)
	{	case 0:
			printf("Not a number...");
			break;
		default:
			switch(n>0)
			{	case 1:
					printf("Positive Number");
					break;
				case 0:
					switch(n)
					{	case 0:
							printf("Zero");
							break;
						default:
							printf("Negative");
					}
				break;
			}
	}
	return 0;
}

