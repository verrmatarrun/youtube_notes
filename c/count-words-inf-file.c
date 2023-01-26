#include<stdio.h>
int main()
{
	char filename[100];
	FILE *fp;
	char ch;
	int count=1;
	printf("Enter filename : ");
	gets(filename);
	
	fp=fopen(filename,"r");
	
	if(fp!=NULL)
	{	
		while((ch=fgetc(fp))!=EOF)
		{	if(ch==' '||ch=='\n')
				count++;
		}
		printf("File have %d words",count);
		fclose(fp);
	}
	else
	{	printf("File opening failed...");
	}
	
	return 0;
}
