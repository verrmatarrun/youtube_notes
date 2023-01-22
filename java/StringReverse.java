import java.util.Scanner;
class StringReverse
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		System.out.print("Enter string : ");
		String str=kb.nextLine();
		String rev="";
		for(int i=str.length()-1;i>=0;i--)
		{
			char ch=str.charAt(i);
			rev=rev+ch;
		}
		System.out.println("Reverse string is "+rev);
		kb.close();
	}
}