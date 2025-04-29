#include "stdio.h"

int main()
{
	int iX=3,iY=4,iZ=5;
	printf("iX=%d,iY=%d,iZ=%d \n",iX,iY,iZ);
	printf("iX>iY is %d \n",iX>iY);
	iZ+=iX<iY;
	printf("iZ=%d \n",iZ);
	return 0;
 } 
