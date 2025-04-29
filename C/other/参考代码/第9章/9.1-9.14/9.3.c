#include <stdio.h>  //22190494刘杰
void fnswap(int *ix, int *iy) 
{
	int itemp;
	itemp = *ix;
	*ix = *iy;
	*iy = itemp;
}
int main() 
{
	int inum1=6,inum2=9;
	printf("交换前的数据 %d %d\n",inum1,inum2);
	fnswap(&inum1,&inum2);
	printf("交换后的数据 %d %d\n",inum1,inum2);
	return 0;
}
