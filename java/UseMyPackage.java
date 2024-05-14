import mypackage.MyClass;
class UseMyPackage
{
	public static void main(String args[])
	{
		MyClass m1=new MyClass()	;
		System.out.println("is 10 prime "+m1.isPrime(10));
		System.out.println("is 7 prime "+m1.isPrime(7));
		System.out.println("is 153 armstrong "+m1.isArmstrong(153));
	}
}