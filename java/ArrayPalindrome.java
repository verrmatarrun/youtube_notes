import java.util.Scanner;

class ArrayPalindrome
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		int size;
		System.out.println("Enter size of array : ");
		size=kb.nextInt();

		int arr[]=new int[size];

		System.out.println("Enter "+size+" values in array ");
		for(int i=0;i<size;i++)
			arr[i]=kb.nextInt();

		int i,j;
		for(i=0,j=size-1;i<=j;i++,j--)
		{
			if(arr[i]!=arr[j])
			{
				System.out.println("Array is not pallindrome");
				break;
			}
		}

		if(i>j)
			System.out.println("Array is palindrome");

	}
}