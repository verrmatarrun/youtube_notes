#include<stdio.h>
int main()
{
	int arr[10],i,j,c;
	printf("Enter 10 numbers in array\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
		
	/*Sort the array*/
	for(i=0;i<9;i++)
	{	
		for(j=i+1;j<10;j++)
		{
			if(arr[i]<arr[j])
			{
				c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	printf("\nAfter sorting array is\n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	return 0;
}
