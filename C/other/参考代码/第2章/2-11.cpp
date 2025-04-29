#include "stdio.h"
int main()
{
	int iA = 2,iB = 3;
	int iX,iY;
	iX = (iA*2+1,iY=iB+2,2.5*iB,iA*iY);
	printf("iX = %d,iY=%d \n",iX,iY);
	return 0;
}
