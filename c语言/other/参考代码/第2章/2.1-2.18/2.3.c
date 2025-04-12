#include <stdio.h>  //p25 2.3
int main()
{
	char c1 = 'n', c2 = '\x65', c3;  //'\'Îª×ªÒå×Ö·û 
	c3 = '\167';
	printf("%c%c%c\n",c1, c2, c3);
	printf("%c\t%c\t%c\n",c1, c2, c3);
	printf("%c\n%c\n%c\n",c1, c2, c3);
	printf("%d\t%d\t%d\n",c1, c2, c3);
	getch();
}
