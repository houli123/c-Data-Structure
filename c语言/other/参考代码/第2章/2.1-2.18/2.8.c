#include <stdio.h>  //p33 2.8
int main()  //0494���� 
{
	int ix = 1, iy;
	iy = ix ++ * 2;  //ix����2�������м�һ 
	printf("ix = %d, iy = %d\n",ix ,iy);
	ix = 1;
	iy = ++ ix * 2;  //ix���м�һ�����2 
	printf("ix = %d, iy = %d",ix ,iy);
	getch();
}
