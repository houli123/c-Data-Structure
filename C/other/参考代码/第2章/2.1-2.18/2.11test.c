#include <stdio.h> 

int main()
{
	int ix,iy,iz;
	ix=iy=3;
	iz=ix*4,iy++,ix*=2,ix*iy;
	printf("%d, %d, %d",ix,iy,iz);
    return 0;
}
