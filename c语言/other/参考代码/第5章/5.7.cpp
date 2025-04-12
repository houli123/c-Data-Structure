#include "stdio.h"
int main()
{
	int iScore[2][5] = {{86,100,75,88,65},{78,90,80,65,85}};
	int i,j;
	for(j=0;j<5;j++)
		{
			printf("%-6d",j+1);
		}

	for(i=0;i<2;i++)
		{
			printf("\n");
			for(j=0;j<5;j++)
				{
					printf("%-6d",iScore[i][j]);	
				}		
		}
	return 0;
 } 
