#include<stdio.h>
int main()
{
	char ch;
	
	for(ch='A';ch<='z';ch++)
	{
		printf("%c ",ch);
		if(ch=='Z')
			ch=ch+6;
	}
	return 0;
}
/*
ASCII
0-255		256Cahracter

'A'-'Z'   65-90
'a'-'z'		97-122

0  1 2 3 4 5 6 7 ... 48 49 50 ... 57 ...    65 66 67 68... 90 91 92 93 94 95 96    97 98 99 ... 122 123 .... 255
Symbol Symbol Symbol 0  1  2  ... 9  Symbol A  B  C  D ... Z  Symbol Symbol Symbol a  b  c  ... z   Symbol Symbol

*/
