#include "math.h"
#include "stdio.h"
int main()
{
	float fNum1,fNum2;
	char chOP='0';
	while(chOP!='#')
	{
		printf("\n Input first number operator second number:");
		scanf("%f%c%f",&fNum1,&chOP,&fNum2);
		switch(chOP)
		{
			case '+': printf("%f%c%f=%f",fNum1,chOP,fNum2,fNum1+fNum2);
					break;
			case '-': printf("%f%c%f=%f",fNum1,chOP,fNum2,fNum1-fNum2);
					break;
			case '*': printf("%f%c%f=%f",fNum1,chOP,fNum2,fNum1*fNum2);
					break;
			case '/': if(fabs(fNum2>1e-6))
						printf("%f%c%f=%f",fNum1,chOP,fNum2,fNum1/fNum2);
					   else
					   	printf("Devided by zero");
					   	break;
			default:printf("Unkown operator");
		}
	}
}
