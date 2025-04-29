#include <stdio.h>
long fnn(int n)
{
	static long isum=1;//isum为(n-1)!,只赋值一次
	isum*=n;
	return isum;
}
int main()
{
	int n;long isum=0;
	printf("请输入一个整数：");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		isum=fnn(i);
	}
	printf("%d!=%ld",n,isum);
    return 0;
}
