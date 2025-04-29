#include <stdio.h>
void main()
{
	int i,k,iscore[2][5]={};
	for(i=0;i<2;i++)
		for(k=0;k<5;k++)
			scanf("%d",&iscore[i][k]);
	for(i=1;i<=5;i++)
		printf("µÚ%-4d",i);
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(k=0;k<5;k++)
			printf("%-6d",iscore[i][k]);
	printf("\n");
	}
}
