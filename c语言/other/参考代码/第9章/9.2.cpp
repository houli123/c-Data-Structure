#include "stdio.h"
int main()
{
	int iX,iY;
	int *piX=&iX,*piY=&iY;
	scanf("%d%d",piX,piY);
	if(*piX>*piY)
		printf("\n%d  %d",*piY,*piX);
	else
		printf("\n%d   %d",*piX,*piY);
	return 0;
}

