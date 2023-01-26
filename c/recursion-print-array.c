#include<stdio.h>
void print(int arr[],int index)
{
	if(index==-1)
		return;
	print(arr,index-1);
	printf("%d ",arr[index]);
}

int main()
{
	int arr[]={10,20,30,40,50,60};
	print(arr,5);
	return 0;
}
