#include "stdio.h"
int main()
{
	int iX ,iY;
	iX =1;
	iY = iX ++ *2;
	printf("iX=%d,iY=%d\n",iX ,iY);
	iX = 1;
	iY =++iX *2;
	printf("iX=%d,iY=%d\n",iX,iY);
	return 0;
}
