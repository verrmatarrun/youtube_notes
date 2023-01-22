class StringReverseRecursion
{
	public static void main(String args[])
	{
		String str="swati";
		printReverse(str,0);		
	}
	static void printReverse(String s,int i)
	{
		if(i==s.length())
			return;
		printReverse(s,i+1);
		System.out.print(s.charAt(i));
	}
}