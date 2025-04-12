#include <stdio.h>  //p66习题三 1.
int main() //0494刘杰 
{
	int iyear,i1;
	printf("请输入一个年份：");
	scanf("%d",&iyear);
	i1 = (iyear%4==0&&iyear%100!=0) || (iyear%400==0);//判断是否为闰年 
	if (i1)
	{
		printf("%d为闰年",iyear);
	}
	else
		printf("%d不是闰年",iyear);
	return 0;
}
