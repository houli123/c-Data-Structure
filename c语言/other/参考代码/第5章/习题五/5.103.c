#include <stdio.h>
#define N 9
void main()
{
	int i,k,iinsert;
	int inum[N+1]={12,20,40,45,50,66,79,80,99};
	printf("������Ҫ�����������");
	scanf("%d",&iinsert);
	for(i=0;i<N;i++)
	{
		if(iinsert > inum[i])
			;
		else
			break;
	}
	for(k=N-1;k>i;k--)
		inum[k+1]=inum[k];
	inum[i]=iinsert;
	printf("����������Ϊ��\n");
	
	for(i=0;i<N+1;i++)
		printf("%d  ",inum[i]);
}
