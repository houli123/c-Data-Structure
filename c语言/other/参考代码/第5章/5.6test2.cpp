#include "stdio.h"
#define N 9
int main()
{
	int i,j,iDelScore,iStu[N+1] ={90,88,85,80,75,70,65,60,55};
	printf("Please input iDelScore :\n");
	scanf("%d",&iDelScore);
	for(i=0;i<N;i++)
	{
		if(iDelScore==iStu[i])
				break;
	}
	for(j=i;j<N-1;j++)
		iStu[j]=iStu[j+1];
	iStu[N-1]=0;
	printf("Now,the score list is:");
	for(i=0;i<N-1;i++)
		printf("%4d",iStu[i]);
	return 0;
 } 
