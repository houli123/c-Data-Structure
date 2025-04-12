#include "stdio.h"
int fnMax(int n,int m); //最大公约数
int fnMin(int n,int m); //最小公倍数

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
	printf("请输入两个整数");
	scanf("%d%d",&iNum1,&iNum2);
	iMax = fnMax(iNum1,iNum2);
	iMin = fnMin(iNum1,iNum2);
	printf("最大公约数是 %d,最小公倍数是 %d",iMax,iMin); 
}
