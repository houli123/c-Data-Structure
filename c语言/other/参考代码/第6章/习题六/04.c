#include <stdio.h>
int fnzhi(int inum)
{
	int i;
	for(i=2;i<inum;i++)
		if(inum%i == 0)
			return 0; //不是质数
	return 1; //质数
}
int main()
{
	int inum;
	printf("请输入一个整数：");
	scanf("%d",&inum);
	if(fnzhi(inum))
		printf("yes");
	else
		printf("no");
	return 0;
}
