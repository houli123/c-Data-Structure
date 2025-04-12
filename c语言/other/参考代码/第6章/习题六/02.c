#include <stdio.h>
long fnSum(int n);
long fnSum(int n)
{
	int i;
	long isum=0;
	for(i=1;i<=n;i++)
		isum+=i;
	return isum;
}
void main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	printf("1-%d的和为 %ld",n,fnSum(n));
}
