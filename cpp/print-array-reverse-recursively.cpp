#include<iostream>
using namespace std;
void print(int arr[],int index)
{
	if(index==-1)
		return;
	cout<<arr[index]<<" ";
	print(arr,index-1);
}

int main()
{
	int arr[]={2,5,4,6,3};
	print(arr,4);
	return 0;
}
