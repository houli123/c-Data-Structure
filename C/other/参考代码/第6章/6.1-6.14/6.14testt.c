#include <stdio.h>
long fnn(int n)
{
	static long isum;//isumΪ(n-1)!,ֻ��ֵһ��
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
	printf("������һ��������");
	scanf("%d",&n);
	isum=fnn(n);
	printf("%d!=%ld",n,isum);
    return 0;
}
