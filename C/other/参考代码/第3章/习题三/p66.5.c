#include <stdio.h>  //p66习题三 5.
int main() //0494刘杰
{
	int ix=2,iy=4;
	if (ix*ix+iy*iy==16)
		printf("该点（2，4）在圆上");
	else if (ix*ix+iy*iy>16)
		printf("该点（2，4）在圆外");
	else if (ix*ix+iy*iy<16)
		printf("该点（2，4）在圆内");
	return 0;
} 
