class ArraySum
{
	public static void main(String args[])
	{	int arr[]={10,2,3,4,5};
		int s=getSum(arr,arr.length-1);
		System.out.println("The sum of array elements is "+s);		
	}
	static int getSum(int arr[],int index)
	{	if(index==0)
			return arr[0];
		int p=getSum(arr,index-1);
		int sum=p+arr[index];
		return sum;
	}
}