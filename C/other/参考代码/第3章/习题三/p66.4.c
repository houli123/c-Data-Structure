#include <stdio.h>  //p66ϰ���� 4.
#include <math.h>  //0494����
int main()
{
	float f1, f2,f3,farea,ftemp,fperimeter;
	int ibuer;
	printf("�����������������ߵĳ��ȣ�");
	scanf("%f%f%f",&f1,&f2,&f3);ftemp =(f1+f2+f3)/2;//���õĺ��׹�ʽ 
	ibuer = (f1+f2>f3)&&(f1+f3>f2)&&(f2+f3>f1);
	if (ibuer){fperimeter=f1+f2+f3;
		farea=sqrt(ftemp*(ftemp-f1)*(ftemp-f2)*(ftemp-f3));
		printf("�������ܳ�Ϊ%.2f,���Ϊ%.2f",fperimeter,farea);} 
	else if (f1+f2<=f3)
		printf("��Ϊ%f+%f<=%f�����Թ�����������",f1,f2,f3);
	else if (f1+f3<=f2)
		printf("��Ϊ%f+%f<=%f�����Թ�����������",f1,f3,f2);
	else if (f3+f2<=f1)
		printf("��Ϊ%f+%f<=%f�����Թ�����������",f3,f2,f1);
}
