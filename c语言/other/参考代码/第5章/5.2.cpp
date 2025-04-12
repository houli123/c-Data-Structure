#include "stdio.h"
#define SIZE 10
int main()
{
	int i,iContest[SIZE];
	float fAve=0;
	for(i=0;i<SIZE;i++)
		scanf("%d",&iContest[i]);
	for(i=0;i<SIZE;i++)
		fAve=fAve+iContest[i];
	fAve = fAve/SIZE;
	printf("The average is %f",fAve);
	return 0;
		
}

