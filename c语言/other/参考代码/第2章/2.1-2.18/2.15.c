#include <stdio.h>  //p41 2.15
#define pai 3.1415926  //����е�ֵ 
int main()  //0494���� 
{
	float fr, fperimeter, fs;
	printf("������һ���뾶��");
	scanf("%f",&fr);
	fperimeter = 2 * pai * fr;  // �����ܳ� 
	fs = pai * fr * fr;  //������� 
	printf("�ܳ� = %.2f, ��� = %.2f", fperimeter, fs);
	getch();
}
