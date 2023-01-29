class StringSplit
{
	public static void main(String args[])
	{
		String s1="my name is tarun";
		String s[]=s1.split("a");

		System.out.println(s.length);
		
		for(String word:s)
			System.out.println(word);

		
	}
}