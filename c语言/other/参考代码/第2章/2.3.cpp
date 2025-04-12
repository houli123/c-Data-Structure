#include "stdio.h"
#include "conio.h"

int main()
{
	char c1='n',c2='\x65',c3;
	c3='\167';
	printf("%c%c%c\n",c1,c2,c3);
	printf("%c\t%c\t%C\n",c1,c2,c3);
	printf("%c\n%c\n%c\n",c1,c2,c3);
	getchar();
	return 0;
 } 
