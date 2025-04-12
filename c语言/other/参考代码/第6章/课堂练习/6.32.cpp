#include "stdio.h"
int fnSub(int iNumber1,int iNumber2);
int fnSub(int iNumber1,int iNumber2)
{
	int iSub;
	iSub=iNumber1-iNumber2;
	return iSub;
}
int main()
{
	int iNum1,iNum2,iNum3;
	printf("\nPlease input two number:");
	scanf("%d%d",&iNum1,&iNum2);
	iNum3=fnSub(iNum1,iNum2);
	printf("The subtraction of %d and %d is %d",iNum1,iNum2,iNum3);
	return 0;
}

