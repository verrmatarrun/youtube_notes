#include<stdio.h>
int main()
{
	FILE *fp;
	char filename[100];
	char ch;
	int lines=1;
	
	printf("Enter filename : ");
	gets(filename);
	
	fp=fopen(filename,"r");
	
	if(fp!=NULL)
	{	
		while((ch=fgetc(fp))!=EOF)
		{
			if(ch=='\n')
				lines++;
		}
		printf("File have %d lines",lines);
		fclose(fp);
		
	}
	else
	{	printf("File opening failed...");
	}
	return 0;
}
