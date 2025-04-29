#include <stdio.h>
int fnmax(int inum1,int inum2);
int fnmax(int inum1,int inum2)
{
	int i;
	for(i=inum1;i>=1;i--)
		if(inum1%i==0 && inum2%i==0)
			return i;
}      //22190494刘杰 
int fnmin(int inum1,int inum2);
int fnmin(int inum1,int inum2)
{
	return inum1 * inum2 / fnmax(inum1,inum2);
}
void main()
{
	int inum1,inum2,imax,imin;
	printf("请输入两个整数：");
	scanf("%d%d",&inum1,&inum2);
	imax=fnmax(inum1,inum2);
	imin=fnmin(inum1,inum2);
	printf("最大公因数是%d,最小公倍数是%d",imax,imin);
}
