#include "stdio.h"
int main()
{
	int iNum,i,j;
	printf("请输入一个正整数");
	scanf("%d",&iNum);
	for(i=2;i<=iNum;i++)
	{
		for(j=2;j<=i;j++)
		{	
			if(i%j ==0)
				break;
		} 
		if(j==i) 
			printf("%d   ",j);
	}		
	return 0;
}
