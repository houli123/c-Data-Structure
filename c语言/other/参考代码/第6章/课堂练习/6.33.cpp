#include "stdio.h"
int fnMul(int iNumber1,int iNumber2);
int fnMul(int iNumber1,int iNumber2)
{
	int iMul;
	iMul=iNumber1*iNumber2;
	return iMul;
}
int main()
{
	int iNum1,iNum2,iNum3;
	printf("\nPlease input two number:");
	scanf("%d%d",&iNum1,&iNum2);
	iNum3=fnMul(iNum1,iNum2);
	printf("The multiplication of %d and %d is %d",iNum1,iNum2,iNum3);
	return 0;
}

