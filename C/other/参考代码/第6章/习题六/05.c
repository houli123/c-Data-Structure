#include <stdio.h>
long fnk(int k,int n)  //求神马的k次方
{
	int i;long isum=1;
	for(i=0;i<k;i++)
		isum*=n;
	return isum;
}

long fnn(int k,int n) //有n个数相加，运行n次fnk(1...n)
{
	long isum=0;
	for(int i=1;i<=n;i++)
		isum+=fnk(k,i);
	return isum;
}

int main() //主函数
{
	int k,n;
	printf("请分别输入f(k,n)中k和n：");
	scanf("%d%d",&k,&n);
	printf("f(%d,%d)=%ld",k,n,fnn(k,n));
	return 0;
}
