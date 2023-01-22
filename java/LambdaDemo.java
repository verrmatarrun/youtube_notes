interface I1
{
	public int calculate(int a,int b);
	
}

class LambdaDemo
{
	public static void main(String args[])
	{	int x=100,y=20;
		I1 add=(a,b)->{return a+b;};
		I1 sub=(a,b)->{return a-b;};
		I1 mul=(a,b)->{return a*b;};
		I1 div=(a,b)->{return a/b;};

		System.out.println(add.calculate(x,y));
		System.out.println(sub.calculate(x,y));
		System.out.println(mul.calculate(x,y));
		System.out.println(div.calculate(x,y));
	}
}