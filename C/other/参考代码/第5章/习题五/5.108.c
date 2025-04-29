#include <stdio.h>
#define N 3
void main()
{
	int inum[N][N],i,j,isum=0;
	printf("请输入%d X %d个元素：",N,N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&inum[i][j]);
	for(i=0;i<N;i++)
			isum+=inum[i][i];
	printf("该%d X %d矩阵主对角线元素之和为：\n%d",N,N,isum);
}
