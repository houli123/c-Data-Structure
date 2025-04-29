#include <stdio.h>
int main()
{
	int ix,iy;
	printf("请输入一个整数：");
	scanf("%d",&ix);
	if(ix>5)
		iy=ix+3;
	else if(ix<0)
		iy=2*ix+30;
	else
		iy=0;
	printf("f(%d)=%d",ix,iy);
	return 0;
}
