#include <stdio.h>
#define N 10
void main()
{
	int k,i,ilist[N][N]={1};
	for(i=1;i<N;i++)
	{
		ilist[i][0]=1;
		ilist[i][i]=1;
	}
	for(i=2;i<N;i++)
		for(k=1;k<i;k++)
			ilist[i][k]=ilist[i-1][k-1]+ilist[i-1][k];
	for(i=0;i<N;i++)
	{
		for(k=0;k<=i;k++)
			printf("%d\t",ilist[i][k]);
		printf("\n");
	}
}
