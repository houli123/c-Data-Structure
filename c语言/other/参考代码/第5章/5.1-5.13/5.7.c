#include <stdio.h>
void main()
{
	int i,k;
	int iscore[2][5]={{86,100,75,88,65},{78,90,80,65,85}};
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
