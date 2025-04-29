#include "stdio.h"
#define N 9
int main()
{
	int i,j,iDelete,iStu[N] ={90,88,85,80,75,70,65,60,55};
	printf("Please input delete score:\n");
	scanf("%d",&iDelete);
	for(j=iDelete;j<N;j++)
		iStu[j-1]=iStu[j];
	printf("Now,the score list is:");
	iStu[8]=0;
	for(i=0;i<N-1;i++)
		printf("%4d",iStu[i]);
	return 0;
 } 
