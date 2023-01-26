#include<stdio.h>
void print(char s[],int i)
{	if(s[i]=='\0')
		return;
	printf("%c",s[i]);
	print(s,i+1);
}
int main()
{	char str[100];
	printf("Enter string : ");
	gets(str);
	printf("String is : ");
	print(str,0);
	return 0;
}
