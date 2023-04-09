#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("Enter string : ");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	
	printf("\nAfter copy the str2 is : %s",str2);
	return 0;
}
