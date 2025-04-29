#include "stdio.h"
#define N 10
void fnSort(int iStu[],int n);
void fnSort(int iStu[],int n)
{
	int i,k,t;
	for(k=1;k<=N-1;k++)
	{
		for(i=N-1;i>=k;i--)
		{
			if(iStu[i]<iStu[i-1])
			{
				t=iStu[i];
				iStu[i]=iStu[i-1];
				iStu[i-1]=t;
			}
		
		}
	}
}
int main()
{
	int i;
	int iGao[N];
	for(i=0;i<N;i++)
		scanf("%d",&iGao[i]);
	fnSort(iGao,N);
	for(i=0;i<N;i++)
		printf("%d ",iGao[i]);
	return 0; 
}
