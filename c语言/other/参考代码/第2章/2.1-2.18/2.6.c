#include <stdio.h>  //p31 2.6
int main()  //0494刘杰 
{
	int i1, i2, i3, inum, isum;
	printf("请输入一个整数(100-999)");
	scanf("%d",&inum);
	i1 = inum % 10;  //个位数
	i2 = inum / 10 % 10;  //十位数
	i3 = inum / 100;  //百位数
	isum = i1 + i2 + i3;
	printf("个位十位百位数的总和是：%d",isum);
	getch();
}
