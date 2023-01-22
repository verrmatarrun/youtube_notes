import java.util.Scanner;
class CountFrequencyOfAlphabets
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		System.out.print("Enter string : ");
		String str=kb.next();
		int frequency[]=new int[26];

		for(int i=0;i<str.length();i++)
			frequency[str.charAt(i)-'a']++;

		for(int i=0;i<26;i++)
			if(frequency[i]>0)
				System.out.println((char)('a'+i)+" = "+frequency[i]);
		kb.close();			
	}
}