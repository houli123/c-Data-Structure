#include <stdio.h> //22190494����
void fnswap(int inum1,int inum2)
{
	int itemp;
	printf("����ǰ inum1=%d inum2=%d\n",
	inum1,inum2);
	itemp=inum1;
	inum1=inum2;
	inum2=itemp;
	printf("��swap�����У������� inum1=%d inum2=%d\n",
	inum1,inum2);
}
int main()
{
	int inum1=6,inum2=9;
	fnswap(inum1,inum2);
	printf("���������� �������inum1=%d inum2=%d",
	inum1,inum2);
    return 0;
}
