#include "stdio.h"
int main()
{
	float fWeight;
	int iTemp;
	printf("Please input the weight");
	scanf("%f",&fWeight);
	iTemp = fWeight /5;
	if(fWeight == 50)
	printf("cost is %f",(3*5+3.5*5+4*10+4.5*10+5*(fWeight-30)));
	else
		switch(iTemp)
	{
		case 0:
			printf("cost is %f",fWeight*3);
			break;
		case 1:
			printf("cost is %f",(3*5+3.5*(fWeight-5)));
			break;
		case 2:
		case 3:
			printf("cost is %f",(3*5+3.5*5+4*(fWeight-10)));
			break;
		case 4:
		case 5:
			printf("cost is %f",(3*5+3.5*5+4*10+4.5*(fWeight-20)));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("cost is %f",(3*5+3.5*5+4*10+4.5*10+5*(fWeight-30)));
			break;
		default:
			printf("reject!");
			break;		
	} 
	return 0;
}
