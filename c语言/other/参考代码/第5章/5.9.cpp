#include "stdio.h"
int main()
{
	int iMatrix1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int iMatrix2[4][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			{
				iMatrix2[j][i]=iMatrix1[i][j];
			}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("%-3d",iMatrix2[i][j]);
		printf("\n");
	}
	return 0;
 } 
