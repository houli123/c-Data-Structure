#include <stdio.h>
int main()
{
	int i1,i2;
	while (1)
	{
		printf("请输入两个整数：");
		scanf("%d%d",&i1,&i2);
		if((i1+i2)%5==0)
		{
			printf("你输了，谢谢！！");
			break;
		}	
		else
			printf("你赢了！");
	}
	return 0;
}
