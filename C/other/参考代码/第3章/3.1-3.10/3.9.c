#include <stdio.h>
int main()
{
	char clicence;
	printf("请输入你的驾驶证：");
	scanf("%c",&clicence);
	switch (clicence)
	{
		case 'A':case 'a':printf("你可以开大客车，货车和小客车");
		break;
		case 'b':case 'B':printf("你可以开货车和小客车");
		break;
		case 'C':case 'c':printf("你可以开小客车");
		break;
		case 'D':case 'd':printf("你可以开摩托车");
		break;
		default:printf("error!!");
	}
	return 0;
}
