#include "stdio.h"
int main()
{
	int iX,*piX;
	iX=10;
	piX=&iX;
	printf("\n piX=%x",piX);
	printf("\n &iX=%x",&iX);
	printf("\n *pix=%d",*piX);
	printf("\n iX=%d",iX);
	return 0;
} 
