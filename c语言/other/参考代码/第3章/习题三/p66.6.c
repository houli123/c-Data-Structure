#include <stdio.h>  //p66习题三 6.
int main() //0494刘杰
{
	int inum,n,isum=0,m=0;
	printf("请输入一个整数：");
	scanf("%d",&inum);
	isum=inum;
	while(isum!=0)
	{
		n=isum%10;  //每次取输入数字的最后一位 
		m=m*10+n;  //每次将isum最后一位放去m的最后位
		isum=isum/10;  //把已经取过的末尾数去掉 
	}
	if(m==inum)
		printf("回文数");
	else
		printf("不是回文数") ;
	return 0;
} 
