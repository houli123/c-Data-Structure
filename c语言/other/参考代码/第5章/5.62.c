#include "stdio.h"
#define N 9

void main()
{
	int i,j,iDelete,iStu[N]={90,88,85,80,75,70,65,60,55};
	printf("ԭ����������");
	for(i=0;i<N;i++)
		printf("%4d",iStu[i]); 
	printf("\n������ɾ���ķ���");
	scanf("%d",&iDelete);
	for(i=0;i<N;i++)
	{
		if(iDelete==iStu[i])
			break;		
	} 
	for(j=i;j<N-1;j++)
		iStu[j]=iStu[j+1];
	iStu[N-1]=0;
	printf("�µ�������");
	for(i=0;i<N-1;i++)
		printf("%4d",iStu[i]); 		 
}
