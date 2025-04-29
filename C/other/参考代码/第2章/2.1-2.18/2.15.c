#include <stdio.h>  //p41 2.15
#define pai 3.1415926  //定义π的值 
int main()  //0494刘杰 
{
	float fr, fperimeter, fs;
	printf("请输入一个半径：");
	scanf("%f",&fr);
	fperimeter = 2 * pai * fr;  // 计算周长 
	fs = pai * fr * fr;  //计算面积 
	printf("周长 = %.2f, 面积 = %.2f", fperimeter, fs);
	getch();
}
