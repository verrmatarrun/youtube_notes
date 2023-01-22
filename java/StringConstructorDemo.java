class StringConstructorDemo
{
	public static void main(String args[])
	{
		char []array={'a','b','c','d'};
		String s1=new String(array);//creates string using the char array
		String s2=s1;
		System.out.println(s1);
		System.out.println(s2);

		System.out.println(s1==s2);


	}
}