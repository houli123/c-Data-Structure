#include "stdio.h"

int main()
{
	int iNum;
	printf("Please input a number \n");
	scanf("%d",&iNum);
	if(iNum%2 == 0)
		printf("%d is even",iNum);
	else
		printf("%d is odd",iNum);
	return 0;
}
