#include<stdio.h>
int find(int arr[],int val,int index, int size)
{	if(index==size)
		return -1;
	if(arr[index]==val)
		return index;
	int pos=find(arr,val,index+1,size);
	return pos;
}
int main()
{	int arr[]={10,20,10,30,40};
	int data=300;
	int i=find(arr,data,0,5);
	printf("%d ",i);
	return 0;
}
