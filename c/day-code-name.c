#include<stdio.h>
int main()
{
	int dayCode;
	printf("Enter day code (1-7)  : ");
	scanf("%d",&dayCode);	
	switch(dayCode)
	{	case 1:	printf("Sunday");	 
		case 2:	printf("Monday");	 
		case 3:	printf("Tuesday");	 
		case 4:	printf("Wednesday");	 
		case 5:	printf("Thursday");	 
		case 6:	printf("Friday");	 
		case 7:	printf("Saturday");	 
		default:	printf("Matho kharab hai kai, day code 1-7 ke beech de");			
	}
	return 0;
}
/*
1-> Sunday
2-> Monday
.
.
7-> Saturday
*/
