#include <stdio.h>  //p28 2.5
int main()  //0494���� 
{
	float fh, fc;
	printf("������һ�������¶ȣ�");
	scanf("%f",&fh);
	fc = 5.0 / 9 * (fh - 32);  //�����¶ȵļ��㹫ʽ 
	printf("�����¶�Ϊ��%.2f",fc);
	getch();
}
