#include <stdio.h>  //p66ϰ���� 2.
int main() //0494����
{
	int i1,i2,i3;
	printf("��������������");
	scanf("%d%d%d",&i1,&i2,&i3);
	if ((i1>=i2)&&(i2>=i3))printf("%d,%d,%d",i3,i2,i1);
	//�����еĿ��ܶ�����һ�� 
	else if((i1>=i3)&&(i3>=i2))printf("%d,%d,%d",i2,i3,i1);
	else if((i3>=i2)&&(i2>=i1))printf("%d,%d,%d",i1,i2,i3);
	else if((i3>=i1)&&(i1>=i2))printf("%d,%d,%d",i2,i1,i3);
	else if((i2>=i1)&&(i1>=i3))printf("%d,%d,%d",i3,i1,i2);
	else if((i2>=i3)&&(i3>=i1))printf("%d,%d,%d",i2,i3,i1);
	return 0;
} 
