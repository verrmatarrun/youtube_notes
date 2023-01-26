#include<stdio.h>
void printFibonacci(int step1, int step2,int total)
{	int i,res;
	printf("\n%d %d",step1,step2);
	for(i=1;i<=total-2;i++)
	{	res=step1+step2;
		printf(" %d",res);
		step1=step2;
		step2=res;
	}
}
int main()
{	int s1,s2,n;
	printf("Enter starting steps \n");
	scanf("%d%d",&s1,&s2);
	printf("Total steps : ");
	scanf("%d",&n);
	printFibonacci(s1,s2,n);
	return 0;
}
