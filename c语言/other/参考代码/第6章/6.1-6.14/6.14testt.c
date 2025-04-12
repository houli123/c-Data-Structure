#include <stdio.h>
long fnn(int n)
{
	static long isum;//isum为(n-1)!,只赋值一次
	if(n==1){
		isum=1;
	}else{
		isum=fnn(n-1)*n;
	}
	return isum;
}
int main()
{
	int n;register long isum=0;
	printf("请输入一个整数：");
	scanf("%d",&n);
	isum=fnn(n);
	printf("%d!=%ld",n,isum);
    return 0;
}
