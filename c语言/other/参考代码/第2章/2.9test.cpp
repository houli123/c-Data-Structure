#include "stdio.h"
int main()
{
	int iX,iY;
	printf("请输入两个整数 \n");
	scanf("%d%d",&iX,&iY);
	printf("两个数的和%d \n",(iX+iY));
	printf("两个数的差%d \n" ,(iX-iY));
	printf("两个数的积%d \n",(iX*iY));
	printf("两个数的商%d \n",(iX/iY));
	printf("第一个数除以第二个数的余数%d",(iX%iY));
	return 0;
}
 
