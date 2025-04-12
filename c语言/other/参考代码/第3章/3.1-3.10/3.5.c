#include <stdio.h>  //0494刘杰 
int main()
{
	int ionoff;
	printf("请输入1或其他数：");
	scanf("%d",&ionoff);
	if (ionoff==1)
		printf("开灯写作业");
	else
		printf("关灯睡觉");
	getch();
}
