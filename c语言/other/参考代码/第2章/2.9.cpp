#include "stdio.h"
int main()
{
	int iX,iY;
	printf("x=");
	scanf("%d",&iX);
	iY = 3*iX*iX*iX+2*iX*iX+iX+1;
	printf("f(%d)=%d",iX,iY);
	return 0;
}
