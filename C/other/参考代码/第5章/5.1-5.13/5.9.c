#include <stdio.h>
void main()
{
	int i,j,imatrix1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int imatrix2[4][3];
	printf("初始的二维数据是：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%-4d",imatrix1[i][j]);
		printf("\n");
	}
	printf("行列互换之后的二维数据是：\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			imatrix2[j][i]=imatrix1[i][j];
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("%-4d",imatrix2[i][j]);
		printf("\n");
	}
} 
