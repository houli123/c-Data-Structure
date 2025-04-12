#include "stdio.h"
int main()
{
	int iWeek;
	printf("Please input 1-7\n");
	scanf("%d",&iWeek);
	if(iWeek == 1)
		printf("Monday");
	else if(iWeek == 2)
		printf("Tuesday");
	else if(iWeek == 3)
		printf("Wednesday");
	else if(iWeek == 4)
		printf("Thursday");
	else if(iWeek == 5)
		printf("Friday");
	else if(iWeek == 6) 
		printf("Saturday");
	else if(iWeek == 7)
		printf("Sunday");
	else 
		printf("invalid input!");
		return 0;		
}
