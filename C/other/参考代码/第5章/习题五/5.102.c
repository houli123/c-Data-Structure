#include <stdio.h>
#define N 9
void main()
{
	int i,inum[N];
	printf("请输入9个数字：");
	for(i=0;i<N;i++)
		scanf("%d",&inum[i]);
	printf("原有的数据为：\n");
	for(i=0;i<N;i++)
		printf("%d  ",inum[i]);
	printf("\n逆序后的数据为：\n");
	for(i=N-1;i>=0;i--)
		printf("%d  ",inum[i]);
}
