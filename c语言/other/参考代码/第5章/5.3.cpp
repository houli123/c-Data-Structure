#include "stdio.h"
#define SIZE 10
int main()
{
	int iContest[SIZE]={0},i=0,iMax=0;
	printf("\n Please input data:");
	for(i=0;i<SIZE;i++)
		scanf("%d",&iContest[i]);
	for(i=0;i<SIZE;i++)
		if(iContest[i]>iContest[iMax])
			iMax=i;
	printf("\n The %dth student got the highest score %d",iMax+1,iContest[iMax]);
	return 0;
}
