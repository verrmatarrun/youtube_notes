#include<iostream>
using namespace std;
int get_sum(int arr[],int index)
{	if(index==0)
		return arr[0];
	int s=get_sum(arr,index-1);
	int sum=s+arr[index];
	return sum;
}
int main()
{	int arr[]={10,2,4,1,2};
	int s=get_sum(arr,4);
	cout<<"The sum of array elements is : "<<s;
	return 0;
}
