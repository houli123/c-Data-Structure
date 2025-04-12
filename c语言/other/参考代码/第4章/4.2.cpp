#include "stdio.h"
int main()
{
	float fCost,fSum=0.0;
	int i=1;
	while(i<=12)
	{
		scanf("%f",&fCost);
		fSum=fSum+fCost;
		i++;
	 } 
	 printf("\n The sum of gas cost is %.1f",fSum);
	 return 0;
}
