#include<stdio.h>
int main()
{	int arr[5];
	int i,key,low=0,mid,high=4;
	printf("Enter values in array in sorted ascending order \n");
	for(i=0;i<5;i++)
	{	scanf("%d",&arr[i]);
	}
	printf("Enter value to be searched : ");
	scanf("%d",&key);
	while(low<=high)
	{	mid=(low+high)/2;
		if(arr[mid]==key)
		{	printf("\n%d found at %d index",key,mid);
			break;
		}
		else if(key>arr[mid])
		{	low=mid+1;
		}
		else
		{	high=mid-1;
		}
	}
	if(low>high)
	{	printf("\n%d not found in array",key);
	}
	return 0;
}
