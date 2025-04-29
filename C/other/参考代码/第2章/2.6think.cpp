#include "stdio.h"

int main()
{
	int iNum;
	int i1,i2,i3,i4,iSum;
	printf("please input a integer(1000-9999):");
	scanf("%d",&iNum);
	i1 = iNum %10;
	i2 = iNum / 10 %10;
	i3 = iNum /100%10 ;
	i4 = iNum /1000 ;
	iSum = i1+i2+i3+i4;
	printf("the sum is :%d",iSum); 
 } 
