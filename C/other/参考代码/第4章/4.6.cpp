#include "stdio.h"
int main()
{
	int i,iSum;
	i=1;
	iSum=0;
	do{
		iSum=iSum+i;
		i++;
	}
	while(i<=10);
	printf("\n The sum is %d",iSum);
	return 0;
}
