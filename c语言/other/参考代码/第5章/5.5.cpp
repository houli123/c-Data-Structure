#include "stdio.h"
#define N 6
int main()
{
	int iStu[N],i,k,iTemp;
	for(i=0;i<N;i++)
		scanf("%d",&iStu[i]);
	for(k=1;k<=N-1;k++)
	{
		for(i=N-1;i>=k;i--)
		{
			if(iStu[i]<iStu[i-1])
			{
				iTemp=iStu[i];
				iStu[i]=iStu[i-1];
				iStu[i-1]=iTemp;
			}
		}
	}
	printf("\n The sorted array is:");
	for(i=0;i<N;i++)
		printf("%6d",iStu[i]);
	return 0;
}
