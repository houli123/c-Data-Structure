#include "stdio.h"

int main()
{
	int iX=3,iY=4;
	printf("iX=%d,iY=%d\n",iX,iY);	
	printf("iX>iY&&(iX=10) is %d\n",iX>iY&&(iX=10));
	printf("iX=%d\n",iX);
	printf("iX<iY||iY++ is %d\n",iX<iY ||iY++);	
    printf("%d",iY);
	return 0;
	
}
