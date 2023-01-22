import java.util.Scanner;
class GCD
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		int n1,n2,rem;
		System.out.println("Enter first number ");
		n1=kb.nextInt();
		System.out.println("Enter 2nd   number ");
		n2=kb.nextInt();
		while(n1%n2!=0)
		{	rem=n1%n2;
			n1=n2;
			n2=rem;
		}
		System.out.println(n2);
		kb.close();
	}
}