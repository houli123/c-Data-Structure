#include "stdio.h"
#define Pai 3.1415926
int main()
{
	float fradius,flong,fsquare,fcircle,fproportion;
	scanf("%f",&flong);
	fsquare = flong * flong;
	fradius = pow(2,-2) / 2 * flong;
	fcircle = Pai * (fradius * fradius);
	fproportion = fcircle / fsquare;
	printf("%0.2f",fproportion);
	return 0;
}
