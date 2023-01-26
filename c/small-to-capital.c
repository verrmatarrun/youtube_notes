#include<stdio.h>
int main()
{
	char sml,cap;
	printf("Enter small case alphabet : ");
	scanf("%c",&sml);
	
	cap=sml-32;//sml=cap+32;
	
	printf("Capital equivalent of small %c is %c",sml,cap);
	return 0;
}
