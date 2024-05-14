#include<stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE]={10,20,30,40,50};
	int data,index,i;
	
	printf("\nArray before insertion : ");
	for(i=0;i<SIZE;i++)
	{	printf(" %d",arr[i]);
	}
	
	printf("\nEnter data : "); scanf("%d",&data);
	printf("Enter index : "); scanf("%d",&index);
		
	for(i=SIZE-1;i>index;i--)
	{	arr[i]=arr[i-1];
	}
	arr[index]=data;
	
	printf("\nArray after insertion : ");
	for(i=0;i<SIZE;i++)
	{	printf(" %d",arr[i]);
	}
	return 0;
}
