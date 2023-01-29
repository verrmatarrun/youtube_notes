class StringContains
{
	public static void main(String args[])
	{
		String s1="my name is tarun";
		String s2="tarun";

		if(s1.contains(s2))
			System.out.println(s2+" is a substring of "+s1);
		else
			System.out.println(s2+" is not a substring of "+s1);

	}
}