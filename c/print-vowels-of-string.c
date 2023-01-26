#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string : ");
	gets(str);
	
	printf("Vowels of string are as follows\n");
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
		)
			printf("%c",str[i]);
	}
	return 0;
}
