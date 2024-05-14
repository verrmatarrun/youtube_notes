#include<stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE];
	int i;
	
	//initialization
	printf("Enter %d values\n",SIZE);
	for(i=0;i<SIZE;i++)
	{	scanf("%d",&arr[i]);
	}
	//Traversal
	printf("%d values are \n",SIZE);
	for(i=0;i<SIZE;i++)
	{	printf("%d ",arr[i]);
	}
	return 0;
}
