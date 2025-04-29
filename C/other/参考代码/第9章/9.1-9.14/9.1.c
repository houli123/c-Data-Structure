#include <stdio.h>
int main()
{
	int ix, *pix;
	ix=10;
	pix=&ix;
	printf("&ix = %x\n",&ix);
	printf("pix = %x\n",pix);
	printf("ix = %d\n",ix);
	printf("*pix = %d\n",*pix);
	return 0;	
}
