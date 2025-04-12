#include <stdio.h>  //p40 2.14
#include <math.h>  //计算平方根需要用到math里的函数 
int main()  //0494刘杰 
{
	float fx, fy;
	printf("请输入一个实数：");
	scanf("%f",&fx);
	fy = sqrt(fx);  // 计算平方根的函数sqrt() 
	printf("fx = %.2f, fy = %.2f", fx, fy);
	getch();
}
