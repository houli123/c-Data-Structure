#include <stdio.h>
#define N 9
void main()
{
	int i,j,idel,iscore[N]={90,88,85,80,75,70,65,60,55};
	printf("ɾ��ǰ������Ϊ��");
	for(i=0;i<N;i++)
		printf("%d ",iscore[i]);
	printf("\n��������Ҫɾ�������ֵ�λ�ã�");
	scanf("%d",&idel);
	for(j=idel-1;j<8;j++)
		iscore[j]=iscore[j+1];
	iscore[N-1]=0;
	printf("ɾ���������Ϊ��\n");
	for(i=0;i<N;i++)
		printf("%d  ",iscore[i]);
}
