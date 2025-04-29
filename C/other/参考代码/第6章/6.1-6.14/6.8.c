#include <stdio.h>
#define N 10
void fnsort(int istu[],int n);
void fnsort(int istu[],int n)
{
	int i,k,itemp;
	for(i=1;i<n-1;i++)
		for(k=N-1;k>=i;k--)
		{
			if(istu[k]<istu[k-1])
			{
				itemp=istu[k];
				istu[k]=istu[k-1];
				istu[k-1]=itemp;
			}
		}
}
void main()
{
	int i,igao[N];
	for(i=0;i<N;i++)
		scanf("%d",&igao[i]);
	fnsort(igao,N);
	printf("排序后的数组为：\n");
	for(i=0;i<N;i++)
		printf("%d  ",igao[i]);
} 
