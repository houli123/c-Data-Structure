#include <stdio.h>
#define size 10
void main()
{
	int i,iContest[size];float fave=0;
	for(i=0;i<size;i++)
		scanf("%d",&iContest[i]);
	for(i=0;i<size;i++)
		fave+=iContest[i];
	printf("平均分为 %.2f",fave/size);
}
