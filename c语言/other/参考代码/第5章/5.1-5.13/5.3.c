#include <stdio.h>
#define SIZE 10
void main()
{
	int iContest[SIZE],i=0,iMax=0;
	for(i=0;i<SIZE;i++)
		scanf("%d",&iContest[i]);
	for(i=0;i<SIZE;i++)
		if(iContest[i]>iContest[iMax])
			iMax = i;
	printf("\n ��%d��ͬѧ�ķ�����ߣ�����Ϊ%d",iMax+1,iContest[iMax]);
}
