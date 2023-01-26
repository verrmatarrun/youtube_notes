#include<stdio.h>
int main()
{
	int arr[5]={10,15,-4,6,-2};
	int i,j,c;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	}
	printf("\nSorted array is \n");
	for(i=0;i<5;i++)
	{	printf("%d ",arr[i]);
	}
	return 0;
}
