#include "stdio.h"

int main()
{
	int iAge;
	printf("Please input the age.");
	scanf("%d",&iAge);
	if(iAge >=18)
		printf("You get a drink ticket!");
	if(iAge<18)
		printf("You can't get the ticket!'");	
	return 0;
}
