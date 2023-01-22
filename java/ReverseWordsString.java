class ReverseWordsString
{
	public static void main(String args[])
	{
		String s="i love to teach coding";
		String words[]=s.split(" ");
		String rev="";
		for(int i=words.length-1;i>=0;i--)
		{
			rev=rev+words[i]+" ";
		}
		System.out.println(rev);		
	}
}