#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{	if(str[i]==' ')
			break;
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
	}
	printf("After converting first word in capitals the string is ---> %s",str);
	return 0;
}
