#include "stdio.h"

int main()
{
	int iNum;
	int i1,i2,i3,iSum;
	printf("please input a integer(100-999):");
	scanf("%d",&iNum);
	i1 = iNum %10;
	i2 = iNum / 10 %10;
	i3 = iNum /100 ;
	iSum = i1+i2+i3;
	printf("the sum is :%d",iSum); 
 } 
