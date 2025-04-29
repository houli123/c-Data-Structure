#include "stdio.h"
int fnSum(int iNumber1,int iNumber2);
int fnSum(int iNumber1,int iNumber2)
{
	int iSum;
	iSum=iNumber1+iNumber2;
	return iSum;
}
int main()
{
	int iNum1,iNum2,iNum3;
	printf("\nPlease input two number:");
	scanf("%d%d",&iNum1,&iNum2);
	iNum3=fnSum(iNum1,iNum2);
	printf("The sum of %d and %d is %d",iNum1,iNum2,iNum3);
	return 0;
}

