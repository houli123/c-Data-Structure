#include <stdio.h>  //p45 ϰ����ڶ�С��
int main()  //0494���� 
{
	float fx, fy;
	printf("������һ��ʵ����");
	scanf("%f",&fx);
	fy = fx;
	if (fx < 0)  //�ж����ʵ���Ƿ�С��0��С��0��ȡ���෴�� 
		fy = -fy;
	printf("ix�ľ���ֵΪ%.2f",fy);
	getch();
}
