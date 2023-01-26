#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string : ");
	gets(str);
	
	printf("Capital letters of string are : ");
	for(i=0; str[i]!='\0'; i++)
	{	
		if(str[i]>='A' && str[i]<='Z')
			printf("%c",str[i]);
	}
	return 0;
}
