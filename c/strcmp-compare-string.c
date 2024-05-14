#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int diff;
	
	printf("Enter first string : ");	gets(str1);
	printf("Enter second string : ");	gets(str2);
	
	diff=strcmp(str1,str2);
	
	if(diff==0)
	{	printf("String are equal/same");
	}
	else
	{	printf("String are not equal");
	}
	
	return 0;
}
