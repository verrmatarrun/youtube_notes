#include<stdio.h>
int main()
{
	char filename[100];
	FILE *fp;
	char ch;
	int count=0;
	
	printf("Enter filepath : ");
	gets(filename);
	
	fp=fopen(filename,"r");
	
	if(fp!=NULL)
	{	while( (ch=fgetc(fp)) != EOF )
		{	count++;
		}
		printf("File has %d characters",count);
		fclose(fp);
	}
	else
	{
		printf("File opening failed...");
	}
	return 0;
}
