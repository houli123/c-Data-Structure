#include "stdio.h"

int main()
{
	float fF,fC;
	printf("Please input the degrees Fahrenheit:");
	scanf("%f",&fF);
	fC = 5.0 / 9 *(fF - 32);
	printf("the degrees Celsius is %0.2f \n",fC);
	return 0;
}
