package mypackage;
public class MyClass
{
	public boolean isPrime(int n)
	{

		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
	public boolean isArmstrong(int n)
	{
		int t=n;
		int sum=0;
		int m;
		while(n!=0)
		{	m=n%10;
			sum=sum+m*m*m;
			n=n/10;
		}
		return sum==t;
	}
}