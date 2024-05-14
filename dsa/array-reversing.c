#include<stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE],i,j,t;
	printf("\nEnter %d values : ",SIZE);
	for(i=0;i<SIZE;i++)
	{	scanf("%d",&arr[i]);
	}
	
	//Reversing logic
	i=0;	j=SIZE-1;
	while(i<j)
	{	t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
		i++;
		j--;
	}
	printf("\nAfter reversing values in array are : ");
	for(i=0;i<SIZE;i++)
	{	printf("%d ",arr[i]);
	}
	return 0;
}
