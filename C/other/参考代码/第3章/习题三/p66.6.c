#include <stdio.h>  //p66ϰ���� 6.
int main() //0494����
{
	int inum,n,isum=0,m=0;
	printf("������һ��������");
	scanf("%d",&inum);
	isum=inum;
	while(isum!=0)
	{
		n=isum%10;  //ÿ��ȡ�������ֵ����һλ 
		m=m*10+n;  //ÿ�ν�isum���һλ��ȥm�����λ
		isum=isum/10;  //���Ѿ�ȡ����ĩβ��ȥ�� 
	}
	if(m==inum)
		printf("������");
	else
		printf("���ǻ�����") ;
	return 0;
} 
