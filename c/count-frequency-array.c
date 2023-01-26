#include<stdio.h>
int main()
{
	int arr[10],key,count=0,i;
	printf("Enter 10 numbers in array\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	
	printf("\n\nEnter value to be searched : ");
	scanf("%d",&key);
	
	//frequency count loop
	for(i=0;i<10;i++)
	{
		if(arr[i]==key)
		{
			count++;
		}
	}
	printf("%d have frequency of %d",key,count);
	return 0;
}
