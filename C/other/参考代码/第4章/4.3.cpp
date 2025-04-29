#include "stdio.h"
int main()
{
	int iNum1,iNum2;
	while(1)
	{
		printf("\nPlease input two number:");
		scanf("%d%d",&iNum1,&iNum2);
		if((iNum1+iNum2)%5!=0)
		{
			printf("You win,continue!");
		}
		else
		{
			printf("You lose,thanks!");
			break;
		}
	}
	return 0;
 } 
