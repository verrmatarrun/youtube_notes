class StringGetBytes
{
	public static void main(String args[])
	{
		String s1="ABCDE";
		byte bytes[]=s1.getBytes();

		
		
		for(byte b:bytes)
			System.out.println(b);

		
	}
}