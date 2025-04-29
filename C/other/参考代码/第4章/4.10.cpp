#include "stdio.h"
int main()
{
	int i;
	double dVol,dSum,dEvery;
	dEvery=1.0;
	dSum=1.0;
	for(i=1;i<64;i++)
	{
		dEvery*=2;
		dSum+=dEvery;
	}
	dVol=dSum/1.42e8;
	printf("\n dSum=%e  dVol=%e",dSum,dVol);
	return 0;
 } 
