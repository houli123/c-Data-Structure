#include "stdio.h"
void fnSwap(int iNum1,int iNum2);
void fnSwap(int iNum1,int iNum2)
{
	int iTemp;
	printf("Start of the swap:iNum1=%d  iNum2=%d\n",iNum1,iNum2);
	iTemp=iNum1;
	iNum1=iNum2;
	iNum2=iTemp;
	printf("End of the swap:iNum1=%d  iNum2=%d\n",iNum1,iNum2);
} 
int main()
{
	int iNum1=6,iNum2=9;
	fnSwap(iNum1,iNum2);
	printf("In main after swap:iNum1=%d  iNum2=%d\n",iNum1,iNum2);
	return 0;
}
