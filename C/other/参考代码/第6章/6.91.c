#include "stdio.h"
#define N 10
void fnDelete(int iStu[],int iNum);
void fnDelete(int iStu[],int iNum)
{
	int i,iFindOut=0;
	for(i=0;i<N;i++)
	{
		if(iStu[i]==iNum)
		{
			iFindOut=1;
			break;
		}		
	}
	if(i<N-1)
		{
			for(;i<N-1;i++)
				iStu[i]=iStu[i+1];
			iStu[N-1] = 0;
		}		
	else 
		{
			if(iFindOut==1)
				iStu[N-1]=0;
			else
				printf("输入的数据查找不到！\n");	
		}
}

void main()
{
	int i,iNum;
	int iGao[N];
	for(i=0;i<N;i++)
		scanf("%d",&iGao[i]);
	scanf("%d",&iNum);
	fnDelete(iGao,iNum);
	for(i=0;i<N;i++)
		printf("%d ",iGao[i]);
} 
