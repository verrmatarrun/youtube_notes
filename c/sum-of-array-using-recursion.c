#include<stdio.h>
int get_sum(int arr[],int index)
{
	if(index==0)
		return arr[0];
	int s=arr[index]+get_sum(arr,index-1);
	return s;
}

int main()
{
	int arr[5]={10,2,3,4,20};
	int s=get_sum(arr,4);
	printf("Sum of array elements is %d",s);
	return 0;
}
