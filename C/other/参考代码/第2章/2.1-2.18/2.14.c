#include <stdio.h>  //p40 2.14
#include <math.h>  //����ƽ������Ҫ�õ�math��ĺ��� 
int main()  //0494���� 
{
	float fx, fy;
	printf("������һ��ʵ����");
	scanf("%f",&fx);
	fy = sqrt(fx);  // ����ƽ�����ĺ���sqrt() 
	printf("fx = %.2f, fy = %.2f", fx, fy);
	getch();
}
