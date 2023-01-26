#include<stdio.h>
void print(int arr[],int index)
{
	if(index==-1)
		return;
	printf("%d ",arr[index]);
	print(arr,index-1);
}
int main()
{
	int arr[]={10,20,30,40,50};
	print(arr,2);
	return 0;
}
