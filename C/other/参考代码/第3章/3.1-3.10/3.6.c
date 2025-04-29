#include<stdio.h>
int main()
{
	int ix,iy,imax;  //imax为ix和iy中最大的数 
	printf("请输入两个整数：");
	scanf("%d%d",&ix,&iy);
	imax = ix>iy?ix:iy;//？左边条件为真则执行中间表达式
	printf("imax=%d",imax);//否则执行最后的表达式 
	return 0;
}
