#include<stdio.h>
int main()
{
	int arr[6],i,key;
	printf("Enter values in array\n");
	for(i=0;i<6;i++)
	{	scanf("%d",&arr[i]);
	}
	
	printf("Enter value to be searched : ");
	scanf("%d",&key);
	
	for(i=0;i<6;i++)
	{	
		if(arr[i]==key)
		{
			printf("\n%d found at %d index",key,i);
			break;
		}
	}
	if(i==6)
		printf("\n%d not found",key);
	return 0;
}
