#include <stdio.h>  //p26 2.4
int main()  //0494���� 
{
	float fEnglish, fChinese, fMath, fSum;
	printf("�밴��˳����������Ӣ�ɼ����ÿո����");
	scanf("%f%f%f", &fChinese, &fMath, &fEnglish);
	fSum = fEnglish + fChinese + fMath;
	printf("�ܷ� = %.2f,ƽ���� = %.2f",fSum ,fSum/3);
	getch();
}
