import java.util.Scanner;
class CountEvenDigitsInNumber
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n=kb.nextInt();

		int count=0,d;
		while(n!=0)
		{
			d=n%10;
			if(d%2==0)
				count++;
			n=n/10;
		}
		System.out.println("Number have "+count+" even digits ");
		kb.close();					
						
	}
}