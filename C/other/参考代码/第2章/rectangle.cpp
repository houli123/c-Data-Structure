#include "stdio.h"

int main()
{
	float fLong,fWidth;
	float fArea;
	printf("请输入矩形的长和宽。\n");
	scanf("%f%f",&fLong,&fWidth);
	fArea = fLong * fWidth;
	printf("矩形的面积是%0.2f",fArea);
	return 0; 
 } 
