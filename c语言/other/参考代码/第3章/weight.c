#include "stdio.h"
void main()
{
	float iWeight,fCost=0;
	printf("Please input the weight:\n");
	scanf("%f",&iWeight);
	if(iWeight>=0&&iWeight<=5)
		fCost = 3*iWeight;
	else if(iWeight>5 &&iWeight<=10)
		fCost = 3*5+(iWeight-5)*3.5;
	else if(iWeight >10 && iWeight <=20)
		fCost = 3*5+3.5*(10-5)+(iWeight-10)*4;
	else if(iWeight>20 && iWeight <=30)
		fCost = 3*5+3.5*5+4*10+(iWeight-20)*4.5;
	else if(iWeight>30 && iWeight<=50)
		fCost = 3*5+3.5*5+4*10+4.5*10 +(iWeight-30)*5;
	else if(iWeight>50)
		printf("reject!");
	if(fCost>0)
		printf("The cost is %f",fCost);
}
