import java.util.Scanner;

class StringPalindrome
{
	public static void main(String args[])
	{

		Scanner kb=new Scanner(System.in);
		System.out.println("Enter string : ");
		String str=kb.nextLine();

		int i,j;
		for(i=0,j=str.length()-1;i<=j;i++,j--)
		{
			if(str.charAt(i)!=str.charAt(j))
			{
				System.out.println("String is not palindrome");
				break;
			}
		}
		if(i>j)
			System.out.println("String is palindrome");
		kb.close();
		
	}
}