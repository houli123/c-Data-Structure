#include "stdio.h"
#include "conio.h" 
#define PAI 3.1415926
int main()
{
	float fr,fArea,fPerimeter;
	printf("Please input the radius:");
	scanf("%f",&fr);
	fPerimeter = 2*PAI*fr;
	fArea = PAI*fr*fr;
	printf("fPerimeter=%0.2f,fArea=%0.2f",fPerimeter,fArea);
	getch();
	return 0;
 } 
 
