#include<stdio.h>
int getmax(int arr[],int index)
{	if(index==0)
		return arr[index];
	int m=getmax(arr,index-1);
	if(arr[index]>m)
		m=arr[index];
	return m;	
}
int main()
{
	int arr[]={10,15,21,170,-10};
	int max=getmax(arr,4);
	printf("Max is %d",max);
	return 0;
}
