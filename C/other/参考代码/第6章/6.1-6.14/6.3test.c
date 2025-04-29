#include <stdio.h>
int fnsum(int inum1,int inum2)
{
	int isum;
	isum = inum1 + inum2;
	return isum;
}

int main()
{
	int inum1,inum2,isum;
	printf("1.加  2.减  3.乘  4.除  5.求余：");
	printf("请输入你要选择的操作：");
	printf("请输入两个数字：");
	scanf("%d%d",&inum1,&inum2);
	isum=fnsum(inum1*inum1,inum2*inum2);
	printf("%d + %d = %d",inum1,inum2,isum);
	return 0;
}
