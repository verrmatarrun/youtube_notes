import java.util.Scanner;
class PrintReverseOfEveryElement
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		//Input the size of the array
		System.out.print("Enter size of array : ");
		int size=kb.nextInt();
		//create array of size elements
		int arr[]=new int[size];
		//Input values in array
		System.out.println("\nEnter "+size+" values in array ");
		for(int i=0;i<size;i++)
			arr[i]=kb.nextInt();
		//Reverse the every element of array
		for(int i=0;i<arr.length;i++)
		{
			int r=0;
			while(arr[i]!=0)
			{
				int m=arr[i]%10;
				r=r*10+m;
				arr[i]/=10;
			}
			arr[i]=r;
		}
		//Print the array
		System.out.println("\nReversed elements are ");
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+"\t");
		kb.close();		
	}
}