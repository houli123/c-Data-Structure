#include <stdio.h>  //p28 2.5
int main()  //0494刘杰 
{
	float fh, fc;
	printf("请输入一个华氏温度：");
	scanf("%f",&fh);
	fc = 5.0 / 9 * (fh - 32);  //华氏温度的计算公式 
	printf("摄氏温度为：%.2f",fc);
	getch();
}
