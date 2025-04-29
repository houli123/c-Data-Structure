#include <stdio.h>

int main()
{
	int iOnOff;
	printf("Please input 1 or a integer:");
	scanf("%d",&iOnOff);
	if(iOnOff == 1)
		printf("\n the light is on.");
	else 
		printf("\n the light is off.");
	return 0; 
}
