#include <stdio.h>  //p32 2.7
int main()  //0494���� 
{
	int i1, i2;
	float faverage;
	printf("�����������������ÿո����:");
	scanf("%d%d", &i1, &i2);
	faverage = (i1 + i2) / 2.0;
	printf("������ƽ��ֵΪ��%.2f",faverage);
	getch();
}
