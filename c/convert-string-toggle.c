#include<stdio.h>
int main()
{	
	char str[100];
	int i;
	printf("Enter string : ");
	gets(str);
	
	printf("Teh original string is %s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		//check if the character is small case alphabet
		if(str[i]>='a'&&str[i]<='z')
		{
			//then convert character into Capital
			str[i]=str[i]-32;
		}
		//check if the character is capital alphabet
		else if(str[i]>='A'&&str[i]<='Z')
		{	
			//then convert the character into the small alphabet
			str[i]=str[i]+32;
		}
	}
	printf("\nThe toggle case string is %s ",str);
	return 0;
}
