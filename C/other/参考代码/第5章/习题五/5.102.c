#include <stdio.h>
#define N 9
void main()
{
	int i,inum[N];
	printf("������9�����֣�");
	for(i=0;i<N;i++)
		scanf("%d",&inum[i]);
	printf("ԭ�е�����Ϊ��\n");
	for(i=0;i<N;i++)
		printf("%d  ",inum[i]);
	printf("\n����������Ϊ��\n");
	for(i=N-1;i>=0;i--)
		printf("%d  ",inum[i]);
}
