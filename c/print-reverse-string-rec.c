#include<stdio.h>
void reverse(char s[],int i)
{
	if(s[i]=='\0')
		return;
	reverse(s,i+1);
	printf("%c",s[i]);
}

int main()
{
	char str[100];
	printf("Enter string : ");
	gets(str);
	printf("String reverse is ");
	reverse(str,0);
	return 0;
}
