#include <stdio.h>  //p36 2.11
int main()  //0494刘杰 
{
	int ia = 2, ib = 3, ix, iy;
	ix = (ia * 2 + 1, iy = ib + 2, 2.5 * ib, ia * iy); 
	//逗号表达式的值为最后一个表达式
	printf("ix = %d, iy = %d", ix, iy) ;
	getch();
}
