#include "stdio.h"

int main()
{
	int i1,i2;
	float fAverage;
	printf("Please input 2 Integer:");
	scanf("%d%d",&i1,&i2);
	fAverage = (float) (i1+i2)/2;
	printf("%0.2f",fAverage);
	return 0;
}
