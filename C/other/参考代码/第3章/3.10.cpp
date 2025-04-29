#include "stdio.h"
int main()
{
	float fScore;
	int iTemp = -1;
	printf("please input a score:");
	scanf("%f",&fScore);
	if(fScore>=0&&fScore<=100)	
		iTemp=fScore/10;
	switch(iTemp)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("E");
			break;
		case 6:
			printf("D");
			break;
		case 7:
			printf("C");
			break;
		case 8:
			printf("B");
			break;
		case 9:
		case 10:
			printf("A");
			break;
		default:
			printf("invalid input!");
	}
	return 0;
}
