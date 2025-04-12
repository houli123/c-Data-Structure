#include <stdio.h>  
#define N 5
void main()
{
	int inum1[N]={50,9,7,4,1},inum2[N]={100,51,8,6,5}
	,inum3[N+N],i,j,itemp;
	for(i=0;i<N;i++)
	{	
		inum3[i]=inum1[i];	
		inum3[i+N]=inum2[i];
	}
	printf("数组合并排序前为：\n");
	for(i=0;i<N+N;i++)
		printf("%d ",inum3[i]);
	for(i=0;i<N+N;i++)
		for(j=N+N-1;j>=i;j--)
			if(inum3[j]>inum3[j-1])
			{	itemp=inum3[j];
				inum3[j]=inum3[j-1];
				inum3[j-1]=itemp;
			}
	printf("\n数组合并排序后为：\n");
	for(i=0;i<N+N;i++)
		printf("%d ",inum3[i]);
}
