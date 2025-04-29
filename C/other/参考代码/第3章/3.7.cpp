#include "stdio.h"

int main() 
{
	int iX,iY;
	printf("Please input a integer:");
	scanf("%d",&iX);
	if(iX>5)
		iY=iX+3;
	else if(iX<0)
		iY=2*iX+30;
		else
			iY=0;
	printf("f(%d)=%d",iX,iY);
	return 0;
}
