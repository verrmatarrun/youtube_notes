#include<stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE]={10,20,30,40,50};
	int i,index;
	
	printf("\nArray before deletion : ");
	for(i=0;i<SIZE;i++)
	{	printf("%d ",arr[i]);
	}
	
	printf("\nEnter index: ");
	scanf("%d",&index);
	
	for(i=index;i<SIZE-1;i++)
	{	arr[i]=arr[i+1];
	}
	arr[i]=0;
	
	printf("\nArray after deletion : ");
	for(i=0;i<SIZE;i++)
	{	printf("%d ",arr[i]);
	}	
	return 0;
}
