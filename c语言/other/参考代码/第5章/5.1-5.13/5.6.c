#include <stdio.h>
#define N 9
void main()
{
	int i,j,iinsert,iscore[N+1]={90,88,85,80,75,70,65,60,55};
	printf("��������Ҫ����ķ�����");
	scanf("%d",&iinsert);
	printf("\n����ǰ������Ϊ��");
	for(i=0;i<N;i++)
		printf("%d  ",iscore[i]);
	for(i=0;i<N;i++)
	{
		if(iinsert<iscore[i]);
		else
			break;
	}
	for(j=N;j>i;j--)
		iscore[j]=iscore[j-1];
	iscore[i]=iinsert;
	printf("\n����������Ϊ��");
	for(i=0;i<N+1;i++)
		printf("%d  ",iscore[i]);
}
