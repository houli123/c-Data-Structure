#include "stdio.h"
int fnMax(int n,int m); //���Լ��
int fnMin(int n,int m); //��С������

int fnMax(int n,int m)
{
	int i;
	for(i=n;i>=1;i--)
		if(n%i==0&&m%i==0)
			return i;
} 
int fnMin(int n,int m)
{
	int i;
	i = m*n/fnMax(n,m);
	return i;
}

void main()
{
	int iNum1,iNum2,iMax,iMin;
	printf("��������������");
	scanf("%d%d",&iNum1,&iNum2);
	iMax = fnMax(iNum1,iNum2);
	iMin = fnMin(iNum1,iNum2);
	printf("���Լ���� %d,��С�������� %d",iMax,iMin); 
}
