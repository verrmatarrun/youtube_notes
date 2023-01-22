import java.util.Scanner;
class AreaOfCircle
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		System.out.print("Enter radius of circle : ");
		int r=kb.nextInt();

		float area;

		area=3.14f*r*r;
		System.out.println("Area is "+area);
	}
}