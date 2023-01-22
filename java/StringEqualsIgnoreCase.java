class StringEqualsIgnoreCase
{
	public static void main(String args[])
	{
		String s1="tarun";
		String s2="Tarun";
		String s3=new String("tarUN");
		System.out.println(s1.equalsIgnoreCase(s2));
		System.out.println(s2.equalsIgnoreCase(s3));
		System.out.println(s1.equalsIgnoreCase(s3));
		System.out.println(s1.equalsIgnoreCase("apple"));


	}
}