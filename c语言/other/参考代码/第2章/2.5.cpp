#include "stdio.h"

int main()
{
	char ch;
	printf("Please input a lowercase letter:");
	ch = getchar();
	ch = ch - 32;
	putchar(ch);
	return 0;
}
