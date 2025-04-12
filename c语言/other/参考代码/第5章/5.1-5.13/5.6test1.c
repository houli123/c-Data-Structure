#include <stdio.h>
void main()
{
	int i,k;
	int iscore[2][5]={{86,100,75,88,65},{78,90,80,65,85}};
	for(k=0;k<5;k++)
	{
		printf("%-6d",iscore[0][k]);
	}
	printf("\n");
	for(k=0;k<5;k++)
	{
		printf("%-6d",iscore[1][k]);
	}
}
