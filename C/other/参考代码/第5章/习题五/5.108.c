#include <stdio.h>
#define N 3
void main()
{
	int inum[N][N],i,j,isum=0;
	printf("������%d X %d��Ԫ�أ�",N,N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&inum[i][j]);
	for(i=0;i<N;i++)
			isum+=inum[i][i];
	printf("��%d X %d�������Խ���Ԫ��֮��Ϊ��\n%d",N,N,isum);
}
