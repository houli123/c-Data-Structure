#include <stdio.h>  //p33 2.8
int main()  //0494刘杰 
{
	int ix = 1, iy;
	iy = ix ++ * 2;  //ix乘以2后再自行加一 
	printf("ix = %d, iy = %d\n",ix ,iy);
	ix = 1;
	iy = ++ ix * 2;  //ix自行加一后乘以2 
	printf("ix = %d, iy = %d",ix ,iy);
	getch();
}
