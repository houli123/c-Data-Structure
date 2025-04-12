#include "stdio.h"

int main()
{
	int iX,iY,iZ;
	iX = iY =3;
	iZ = iX *4,iY++,iX*=2,iX*iY;
	printf("%d£¬%d£¬%d",iX,iY,iZ);
	return 0;
}
