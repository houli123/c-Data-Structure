#include "stdio.h"
int main()
{
	int iX,iY,iMax;
	printf("Please input 2 integers:");
	scanf("%d,%d",&iX,&iY);
	//iMax =iX>iY?iX:iY;
	
	if(iX>iY)
		iMax = iX;
	else
		iMax = iY;
	printf("iMax=%d",iMax);
	return 0;
}
