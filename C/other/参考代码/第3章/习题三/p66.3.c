#include <stdio.h>  //p66ϰ���� 3.
int main() //0494����
{
	int iday,ihour;
	float ftax,fwage;
	printf("������������ź͹���Сʱ��");
	scanf("%d%d",&iday,&ihour);
	switch(iday)
	{
		case 1:case 2:case 3:case 4:case 5: //��һ������ 
			fwage=20*ihour;ftax=fwage*0.045;  //���ʺ�˰����㹫ʽ 
			break;
		case 6:case 7:fwage=20*3*ihour;  //�������� 
			ftax=fwage*0.045;
	}
	printf("���յĹ���Ϊ%.2f,˰��Ϊ%.2f",fwage,ftax);
	return 0;
} 
