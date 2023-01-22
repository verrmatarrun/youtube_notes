import java.util.Scanner;
class SumOfThreeUsingFunction
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		int a,b,c;
		System.out.print("Enter first number : ");
		a=kb.nextInt();
		System.out.print("Enter second number : ");
		b=kb.nextInt();
		System.out.print("Enter third number : ");
		c=kb.nextInt();
		int sum=sumOfThree(a,b,c);
		System.out.println("Sum of three integers is "+sum);
		kb.close();		
	}
	private static int sumOfThree(int a,int b,int c)
	{
		// int s;
		// s=a+b+c;
		// return s;
		return a+b+c;
	}
}