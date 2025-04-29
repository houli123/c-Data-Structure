#include "stdio.h"
#define N 9
int main()
{
	int i,j,iInsert,iStu[N+1] ={90,88,85,80,75,70,65,60,55};
	printf("Please input insert score:\n");
	scanf("%d",&iInsert);
	for(i=0;i<N;i++)
	{
		if(iInsert<iStu[i])
			;
			else
				break;
	}
	for(j=N;j>i;j--)
		iStu[j]=iStu[j-1];
	iStu[i]=iInsert;
	printf("Now,the score list is:");
	for(i=0;i<N+1;i++)
		printf("%4d",iStu[i]);
	return 0;
 } 
