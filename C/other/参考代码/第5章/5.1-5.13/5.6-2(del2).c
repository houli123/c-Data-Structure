#include <stdio.h>
#define N 9
void main()
{
	int i,j,idel,iscore[N]={90,88,85,80,75,70,65,60,55};
	printf("ɾ��ǰ������Ϊ��");
	for(i=0;i<N;i++)
		printf("%d ",iscore[i]);
	printf("\n��������Ҫɾ��������");
	scanf("%d",&idel);
	for(i=0;i<N;i++)
		if(iscore[i]==idel)
			break;
	for(j=i;j<N-1;j++)
		iscore[j]=iscore[j+1];
	iscore[N-1]=0;
	printf("ɾ���������Ϊ��\n");
	for(i=0;i<N;i++)
		printf("%d  ",iscore[i]);
}
