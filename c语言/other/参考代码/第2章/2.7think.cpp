#include "stdio.h"
#define PI 3.1415926

int main()
{
	float fV,fr;
	printf("Please input the radius:");
	scanf("%f",&fr);
	fV = (float) 4/3*PI * fr * fr * fr;
	printf("fv=%f",fV);
	return 0; 
} 
