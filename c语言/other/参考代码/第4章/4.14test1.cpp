#include "stdio.h"
int main()
{
	int iHen=1;
	do
		{
			if(iHen*2+(35-iHen)*4==94)
				printf("The number of hen is %d,the number of rabbit is %d",iHen,35-iHen);
			iHen++;
		}while(iHen<=35);
			
	return 0;
}
