#include <stdio.h>
long fnk(int k,int n)  //�������k�η�
{
	int i;long isum=1;
	for(i=0;i<k;i++)
		isum*=n;
	return isum;
}

long fnn(int k,int n) //��n������ӣ�����n��fnk(1...n)
{
	long isum=0;
	for(int i=1;i<=n;i++)
		isum+=fnk(k,i);
	return isum;
}

int main() //������
{
	int k,n;
	printf("��ֱ�����f(k,n)��k��n��");
	scanf("%d%d",&k,&n);
	printf("f(%d,%d)=%ld",k,n,fnn(k,n));
	return 0;
}
