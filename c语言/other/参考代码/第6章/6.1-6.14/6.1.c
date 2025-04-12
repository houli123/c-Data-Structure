#include <stdio.h>
void fnprint();
void fnprint()
{
	int i;
	for(i=0;i<15;i++)
		printf("*");
	printf("\n"); 
}
void main()
{
	fnprint();
	fnprint();
	fnprint();
}
