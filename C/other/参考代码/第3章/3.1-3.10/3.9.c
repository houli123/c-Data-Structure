#include <stdio.h>
int main()
{
	char clicence;
	printf("��������ļ�ʻ֤��");
	scanf("%c",&clicence);
	switch (clicence)
	{
		case 'A':case 'a':printf("����Կ���ͳ���������С�ͳ�");
		break;
		case 'b':case 'B':printf("����Կ�������С�ͳ�");
		break;
		case 'C':case 'c':printf("����Կ�С�ͳ�");
		break;
		case 'D':case 'd':printf("����Կ�Ħ�г�");
		break;
		default:printf("error!!");
	}
	return 0;
}
