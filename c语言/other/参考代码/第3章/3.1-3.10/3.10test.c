#include <stdio.h> 
int main()
{
	int iwei;float fsum;
	printf("��������������(kg)��");
	scanf("%d",&iwei);
	if(iwei<=5 && iwei>0)
		fsum=iwei*3;
	else if(iwei<=10 && iwei>5)
		fsum=15 + 3.5*(iwei-5);
	else if(iwei<=20 && iwei>10)
		fsum=15 + 17.5 + 4*(iwei-10);
	else if(iwei<=30 && iwei>20)
		fsum=15 + 17.5 + 40 + 4.5*(iwei-20);
	else if(iwei<=50 && iwei>30)
		fsum=15 + 17.5 + 40 + 45 + 5*(iwei-30);
	else if(iwei > 50)
		printf("����");
	else	
		printf("�������");
	printf("��ݷ�Ϊ��%.1f",fsum);
    return 0;
}
