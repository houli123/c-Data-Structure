#include <stdio.h>  //0494���� 
int main()
{
	int ix,iy;
	printf("������һ��������");
	scanf("%d",&ix);
	iy = ix;
	if (ix<0)
		iy = -ix;
	printf("\n|%d|=%d",ix,iy);
	getch();
}
