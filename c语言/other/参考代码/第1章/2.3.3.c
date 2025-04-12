#include "stdio.h"
int main()
{
	int inum = 65;
	char c1='A'; 
	char c2 = '\101';
	char c3 = '\x41';
	printf("%c\n%c\n%c\n",c1,c2,c3);
	printf("%d",inum);
	return 0;
}
