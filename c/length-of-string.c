#include<stdio.h>
int main()
{
	char str[100];
	int i;
	gets(str);
	for(i=0;str[i]!='\0';i++);
	
	printf("Length of string is %d",i);
	return 0;
}
