#include<iostream>
using namespace std;
void print(int arr[],int index)
{	if(index==-1)
		return;
	print(arr,index-1);
	cout<<arr[index]<<" ";
}
int main()
{
	int arr[]={10,20,30,40,50};
	print(arr,4);
	return 0;
}
