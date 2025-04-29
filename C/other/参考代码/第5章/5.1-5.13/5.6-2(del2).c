#include <stdio.h>
#define N 9
void main()
{
	int i,j,idel,iscore[N]={90,88,85,80,75,70,65,60,55};
	printf("删除前的数组为：");
	for(i=0;i<N;i++)
		printf("%d ",iscore[i]);
	printf("\n请输入你要删除分数：");
	scanf("%d",&idel);
	for(i=0;i<N;i++)
		if(iscore[i]==idel)
			break;
	for(j=i;j<N-1;j++)
		iscore[j]=iscore[j+1];
	iscore[N-1]=0;
	printf("删除后的数组为：\n");
	for(i=0;i<N;i++)
		printf("%d  ",iscore[i]);
}
