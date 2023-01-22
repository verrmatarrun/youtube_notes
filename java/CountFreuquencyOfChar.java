import java.util.Scanner;

class CountFreuquencyOfChar
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		System.out.print("Enter string : ");
		String str=kb.next();
		System.out.print("Enter character : ");
		char ch=kb.next().charAt(0);

		int count=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)==ch)
				count++;
		}
		System.out.println("Frequency of "+ch+" is "+count);
		kb.close();
		
	}
}