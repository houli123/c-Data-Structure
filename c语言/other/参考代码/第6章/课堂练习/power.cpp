#include "stdio.h"
long lPower(int iNumber1,int iNumber2);
long lPower(int iNumber1,int iNumber2)
{
	int i;
	long lResult=1;
	for(i=1;i<=iNumber2;i++)
		lResult=iNumber1*lResult;
	return lResult;
}
int main()
{
	int iNum1,iNum2,iNum3;
	printf("\nPlease input two number:");
	scanf("%d%d",&iNum1,&iNum2);
	iNum3=lPower(iNum1,iNum2);
	printf("The power of %d and %d is %d",iNum1,iNum2,iNum3);
	return 0;
}
