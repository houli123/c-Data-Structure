#include "stdio.h"
int main()
{
	int iWine,iBeer;
	int iTemp;
	iWine = 1;
	iBeer = 2;
	printf("iWine = %d,iBeer = %d\n",iWine,iBeer);
	iTemp = iWine;
	iWine = iBeer;
	iBeer = iTemp;
	printf("iWine = %d,iBeer = %d\n",iWine,iBeer);
	return 0;
}
