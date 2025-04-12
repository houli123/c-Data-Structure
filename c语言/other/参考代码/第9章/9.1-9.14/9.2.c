#include <stdio.h>
int main()
{
	int ix,iy;
	int *pix = &ix, *piy = &iy;
	printf("请输入两个整数：");
	scanf("%d%d",pix,piy);
	if(*pix > *piy){
		printf("%d %d",*piy,*pix);
	}else{
		printf("%d %d",*pix,*piy);
	}
    return 0;
}
