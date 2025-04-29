#include <stdio.h>
int main()
{
	int i=1;
	double dsum=1,devery=1,darea;
	for (;i<64;i++)
	{
		devery*=2;
		dsum+=devery;
	}
	darea=dsum/1.42e8;
	printf("dsum=%e,darea=%e",dsum,darea);
}
