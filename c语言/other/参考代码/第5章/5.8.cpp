#include "stdio.h"
int main()
{
	int iTall[3][4]={167,170,175,178,180,177,165,167,169,173,12,171},i,j;
	int iTallest=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(iTallest<iTall[i][j])
				iTallest=iTall[i][j];
		}	
	}
	printf("The tallest is:%d",iTallest);
	return 0;
}
