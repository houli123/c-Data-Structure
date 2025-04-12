#include "stdio.h"
#define N 10
void fnSort(int iStu[],int n);
void fnSort(int iStu[],int n)
{
	int i,k,t;
	for(k=1;k<=n-1;k++)
	{
		for(i=n-1;i>=k;i--)
		if(iStu[i]<iStu[i-1])
		{
			t=iStu[i];
			iStu[i]=iStu[i-1];
			iStu[i-1]=t;
		}
	}
}


void main()
{
	int i;
	int iGao[N];
	for(i=0;i<N;i++)
		scanf("%d",&iGao[i]);
	fnSort(iGao,N);
	for(i=0;i<N;i++)
		printf("%d ",iGao[i]);
} 
