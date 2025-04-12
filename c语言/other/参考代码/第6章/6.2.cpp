#include "stdio.h"
void fnPrint(int n);
void fnPrint(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("*");
	printf("\n");
} 
int main()
{
	fnPrint(3);
	fnPrint(6);
	fnPrint(9);
	return 0;
}
