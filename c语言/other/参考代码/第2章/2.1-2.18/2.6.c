#include <stdio.h>  //p31 2.6
int main()  //0494���� 
{
	int i1, i2, i3, inum, isum;
	printf("������һ������(100-999)");
	scanf("%d",&inum);
	i1 = inum % 10;  //��λ��
	i2 = inum / 10 % 10;  //ʮλ��
	i3 = inum / 100;  //��λ��
	isum = i1 + i2 + i3;
	printf("��λʮλ��λ�����ܺ��ǣ�%d",isum);
	getch();
}
