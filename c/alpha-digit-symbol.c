#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	
	/*Check if the charcter is capital alphabet*/
	if(ch>='A'&&ch<='Z')
		printf("%c is capital alphabet",ch);
	/*check if the character is small alphabet*/
	else if(ch>='a'&&ch<='z')
		printf("%c is small alphabet",ch);
	/*check if the character is digit*/
	else if(ch>='0'&&ch<='9')
		printf("%c is a digit",ch);
	else
		printf("%c is a symbol",ch);
		
	return 0;
}
