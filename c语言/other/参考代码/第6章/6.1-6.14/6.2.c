#include <stdio.h>
void fnprint(int n);
void fnprint(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("*");
	printf("\n");
}
void main()
{
	fnprint(3);
	fnprint(6);
	fnprint(9);
}
