#include "stdio.h"
void fnPrint();
void fnPrint()
{
	int i;
	for(i=0;i<15;i++)
		printf("*");
 } 
int  main()
{
	fnPrint();
	printf("\n");
	fnPrint();
	return 0; 
}
