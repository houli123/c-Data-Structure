#include "stdio.h"

int main()
{
	int i,iSum;
	i=1;
	iSum=0;
	while(i<=10)
	{
		iSum=iSum+i;
		i++;
	}
	printf("\n The sum is %d",iSum);
	return 0;
 } 
 
