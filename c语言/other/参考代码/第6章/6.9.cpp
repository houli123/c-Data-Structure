#include "stdio.h"
#define N 10
void fnDelete(int iStu[],int Num)
{
	int i,k;
	for(i=0;i<N-1;i++)
	if(iStu[i]==Num)
	{
		for(k=i;k<N-1;k++)
			iStu[k]=iStu[k+1];
		break;
	}
}
int main()
{
	int i,iNum;
	int iGao[N];
	for(i=0;i<N;i++)
		scanf("%d",&iGao[i]);
	scanf("%d",&iNum);
	fnDelete(iGao,iNum);
	for(i=0;i<N-1;i++)
		printf("%d ",iGao[i]);
	return 0;
}


