#include <stdio.h>
int fnmyfun()
{
	auto int ix=1;
	static int iy=1;
	ix+=2;
	iy+=2;
	return ix+iy;
}
int main()
{
	register int i;
	int isum;
	for(i=0;i<2;i++){
		isum=fnmyfun();
		printf("%4d",isum);
	}
    return 0;
}
