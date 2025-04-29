#include "stdio.h"
void fnSwap(int *iX,int *iY);
void fnSwap(int *iX,int *iY)
{
	int iTemp;
	iTemp=*iX;
	*iX=*iY;
	*iY=iTemp;
}
int main(){
	int iNum1=6,iNum2=9;
	fnSwap(&iNum1,&iNum2);
	printf("In main:iNum1=%d  iNum2=%d\n",iNum1,iNum2);
	return 0;
}
