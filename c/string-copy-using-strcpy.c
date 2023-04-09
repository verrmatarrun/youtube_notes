#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("Enter string : ");
	gets(str1);
	
	strcpy(str2,str1);
	
	printf("\nAfter copy the str2 is : %s",str2);
	return 0;
}
