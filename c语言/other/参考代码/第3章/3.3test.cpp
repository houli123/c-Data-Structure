#include "stdio.h"

int main()
{
	int iX=3,iY=4,iZ=5;
	printf("%d",iX>iY&&iY++&&iZ--);
	printf("%d,%d",iY,iZ);
	return 0;
}
