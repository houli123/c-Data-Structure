#include <stdio.h>
int fnsum(int inum1,int inum2);
int fnsum(int inum1,int inum2)
{
	int isum;
	isum = inum1 + inum2;
	return isum;
}
void main()
{
	int inum1,inum2,isum;
	printf("请输入两个数字：");
	scanf("%d%d",&inum1,&inum2);
	isum=fnsum(inum1,inum2);
	printf("%d + %d = %d",inum1,inum2,isum);
}
