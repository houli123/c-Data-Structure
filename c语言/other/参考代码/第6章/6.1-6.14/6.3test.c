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
	printf("1.��  2.��  3.��  4.��  5.���ࣺ");
	printf("��������Ҫѡ��Ĳ�����");
	printf("�������������֣�");
	scanf("%d%d",&inum1,&inum2);
	isum=fnsum(inum1*inum1,inum2*inum2);
	printf("%d + %d = %d",inum1,inum2,isum);
	return 0;
}
