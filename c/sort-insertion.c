#include<stdio.h>
int main()
{
	int arr[6],i,j,temp;
	printf("Enter values in array\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<6;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{	arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("After sorting array is : ");
	for(i=0;i<6;i++)
		printf("%d ",arr[i]);
	return 0;
}
