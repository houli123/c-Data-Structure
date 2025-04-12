#include "stdio.h"
int main()
{
	int iRow,iCol;
	for(iRow=1;iRow<=9;iRow++)
	{
		for(iCol=1;iCol<=iRow;iCol++)
			printf("%d*%d=%d  ",iCol,iRow,iRow*iCol);
		printf("\n");	
	}
}
