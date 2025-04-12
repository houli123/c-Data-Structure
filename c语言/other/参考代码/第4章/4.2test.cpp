#include "stdio.h"
int main()
{
	float fCost,fSum=0.0;
	int i=1,iMonth=0;
	while(i<=12)
	{
		scanf("%f",&fCost);
		if(fCost>10)
			iMonth++;
		fSum=fSum+fCost;
		i++;
	 } 
	 printf("\n The sum of gas cost is %.1f",fSum);
	 printf("\n The month >10 yuan is %d",iMonth);
	 return 0;
}
