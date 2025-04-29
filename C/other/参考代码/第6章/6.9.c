#include "stdio.h"
#define N 10
void fnDelete(int iStu[],int iNum);
void fnDelete(int iStu[],int iNum)
{
	int i,k;
	for(i=0;i<N-1;i++)
	if(iStu[i]==iNum)
	{
		for(i;i<N-1;i++)
			iStu[i]=iStu[i+1];
		break;
	}
		iStu[N-1]=0;
	
	
} 

void main()
{
	int i,iNum;
	int iGao[N];
	for(i=0;i<N;i++)
		scanf("%d",&iGao[i]);
	scanf("%d",&iNum);
	fnDelete(iGao,iNum);
	for(i=0;i<N-1;i++)
		printf("%d ",iGao[i]);
}
