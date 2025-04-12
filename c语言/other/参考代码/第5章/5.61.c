#include "stdio.h"
#define N 9

void main()
{
	int i,j,iDelete,iStu[N]={90,88,85,80,75,70,65,60,55};
	printf("原来的数组是");
	for(i=0;i<N;i++)
		printf("%4d",iStu[i]); 
	printf("\n请输入删除的序号");
	scanf("%d",&iDelete);
	for(i=iDelete;i<N;i++)
		iStu[i-1]=iStu[i];
	iStu[N-1]=0;
	printf("新的数组是");
	for(i=0;i<N-1;i++)
		printf("%4d",iStu[i]); 		 
}
