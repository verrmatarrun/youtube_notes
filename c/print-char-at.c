#include<stdio.h>
int main()
{
	char str[100];
	int pos;
	printf("Enter string : ");
	gets(str);
	
	printf("Enter position : ");
	scanf("%d",&pos);
	
	printf("\nCharacter at %d position is %c",pos,str[pos-1]);
	return 0;
}
