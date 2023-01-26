#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string : ");
	gets(str);
	
	printf("Small letters of string are : ");
	for(i=0; str[i]!='\0'; i++)
	{	
		if(str[i]>='a' && str[i]<='z')
			printf("%c",str[i]);
	}
	return 0;
}
