#include "stdio.h"
int fnMax(int n,int m)
{
	int i;
	for(i=n;i>=1;i--)
		if(m%i==0&&n%i==0)
			return i;
}
long fnMin(int n,int m)
{
	long i;
	i=m*n/fnMax(n,m);
	return i;
 } 
 int main()
 {
 	int iNum1,iNum2;
 	int iMax;
 	long iMin;
 	printf("��������������\n");
 	scanf("%d%d",&iNum1,&iNum2);
 	iMax=fnMax(iNum1,iNum2);
 	iMin=fnMin(iNum1,iNum2);
 	printf("���Լ����%d,��С��������%ld",iMax,iMin);
 	return 0;
 }
