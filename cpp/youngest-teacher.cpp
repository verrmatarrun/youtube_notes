#include<stdio.h>
struct Teacher
{	int age,salary;
	char name[50];
};
int main()
{
	struct Teacher t1,t2,t3;
	printf("Enter details of teacher1\n");
	printf("Name  : ");	scanf("%s",t1.name);
	printf("Age   : ");	scanf("%d",&t1.age);
	printf("salary  : ");	scanf("%d",&t1.salary);
	
	printf("Enter details of teacher2\n");
	printf("Name  : ");	scanf("%s",t2.name);
	printf("Age   : ");	scanf("%d",&t2.age);
	printf("salary  : ");	scanf("%d",&t2.salary);
	
	printf("Enter details of teacher3\n");
	printf("Name  : ");	scanf("%s",t3.name);
	printf("Age   : ");	scanf("%d",&t3.age);
	printf("salary  : ");	scanf("%d",&t3.salary);
	
	printf("\nDetails of youngest teacher\n");	
	if(t1.age<t2.age && t1.age<t3.age)
	{	printf("Name  : %s",t1.name);
		printf("\nAge   : %d",t1.age);
		printf("\nsalary  : %d",t1.salary);	
	}
	else if(t2.age<t3.age)
	{	printf("Name  : %s",t2.name);
		printf("\nAge   : %d",t2.age);
		printf("\nsalary  : %d",t2.salary);
	}
	else
	{	printf("Name  : %s",t3.name);
		printf("\nAge   : %d",t3.age);
		printf("\nsalary  : %d",t3.salary);
	}	
	return 0;
}
