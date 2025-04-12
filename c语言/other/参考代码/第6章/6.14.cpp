#include "stdio.h"
int fnMyfun()
{
	auto int iX=1;
	static int iY=1;
	iX=iX+2;
	iY=iY+2;
	return iX+iY;
}
int main()
{
	register int i;
	int iSum;
	for(i=1;i<=2;i++)
	{
		iSum=fnMyfun();
		printf("%4d",iSum);
	}
	return 0;
}
