#include <stdio.h>
#define N 1000
long fnfib(int inum);
long fnfib(int inum)
{
	int i,ifib[N]={1,1};
	for(i=2;inum>=i;i++)
		ifib[i]=ifib[i-1]+ifib[i-2];
	return ifib[i-2];
}
int main()
{
	int inum;
	printf("������Ҫ���fib(n)��");
	scanf("%d",&inum);
	printf("��Ҫ���fib(%d)Ϊ%ld",inum,fnfib(inum));
	return 0;
}
