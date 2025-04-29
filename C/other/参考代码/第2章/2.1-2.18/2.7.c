#include <stdio.h>  //p32 2.7
int main()  //0494刘杰 
{
	int i1, i2;
	float faverage;
	printf("请输入两个整数，用空格隔开:");
	scanf("%d%d", &i1, &i2);
	faverage = (i1 + i2) / 2.0;
	printf("两数的平均值为：%.2f",faverage);
	getch();
}
