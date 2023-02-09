class StringValueOf
{
	public static void main(String args[])
	{
		char arr[]={'T','A','R','U','N',' ','V','E','R','M','A'};
		String x=String.valueOf(arr);
		String y=String.valueOf(arr,2,5);
		System.out.println(x);
		System.out.println(y);		
	}
}