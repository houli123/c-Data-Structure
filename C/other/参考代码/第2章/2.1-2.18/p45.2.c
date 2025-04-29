#include <stdio.h>  //p45 习题二第二小题
int main()  //0494刘杰 
{
	float fx, fy;
	printf("请输入一个实数：");
	scanf("%f",&fx);
	fy = fx;
	if (fx < 0)  //判断这个实数是否小于0，小于0则取其相反数 
		fy = -fy;
	printf("ix的绝对值为%.2f",fy);
	getch();
}
