#include "stdio.h"

int main()
{
	int iSum=0,i=0;
	while(iSum<1000)
	{
		i++;
		iSum+=i*i;
	}
	printf("\n n=%d",i-1);
	return 0;
}
