#include "stdio.h"
int fnDiv(int iNumber1,int iNumber2);
int fnDiv(int iNumber1,int iNumber2)
{
	int iDiv;
	iDiv=iNumber1/iNumber2;
	return iDiv;
}
int main()
{
	int iNum1,iNum2,iNum3;
	printf("\nPlease input two number:");
	scanf("%d%d",&iNum1,&iNum2);
	iNum3=fnDiv(iNum1,iNum2);
	printf("The divdsion of %d and %d is %d",iNum1,iNum2,iNum3);
	return 0;
}

