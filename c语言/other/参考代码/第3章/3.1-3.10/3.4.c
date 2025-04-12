#include <stdio.h>  //0494刘杰 
int main()
{
	int ix,iy;
	printf("请输入一个整数：");
	scanf("%d",&ix);
	iy = ix;
	if (ix<0)
		iy = -ix;
	printf("\n|%d|=%d",ix,iy);
	getch();
}
