#include <stdio.h>
void main()
{
	int i,j,itall[3][4]={{167,170,175,178},
						{180,177,165,167},
						{169,173,172,171}
						};
	int itallest=0,irow,icol;
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<4;j++)
		{
			if(itall[i][j]>itallest)
			{
				irow=i;icol=j;
				itallest=itall[i][j];
			}
			printf("%-6d",itall[i][j]);
		}
		printf("\n");
	}
	printf("最高的是%d，在第%d行，第%d列",itallest,irow+1,icol+1);
}
