class StringEquals
{
	public static void main(String args[])
	{
		String s1="tarun";
		String s2="Tarun";
		String s3=new String("tarun");
		System.out.println(s1.equals(s2));
		System.out.println(s2.equals(s3));
		System.out.println(s1.equals(s3));
		System.out.println(s1.equals("apple"));


	}
}