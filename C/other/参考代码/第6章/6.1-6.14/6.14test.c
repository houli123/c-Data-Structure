#include <stdio.h>
long fnn(int n)
{
	static long isum=1;//isumΪ(n-1)!,ֻ��ֵһ��
	isum*=n;
	return isum;
}
int main()
{
	int n;long isum=0;
	printf("������һ��������");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		isum=fnn(i);
	}
	printf("%d!=%ld",n,isum);
    return 0;
}
