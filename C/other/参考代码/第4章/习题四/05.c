#include <stdio.h>
void main()
{
	int i=100,i1,i2,i3;
	//i1Ϊ��λ����i2Ϊʮλ����i3Ϊ��λ�� 
	for(;i<=999;i++)
	{
		i1=i/100;i1*=i1*i1;//���������λ�ϵ���Ȼ���������� 
		i2=i/10%10;i2*=i2*i2;
		i3=i%10;i3*=i3*i3;
		if((i1+i2+i3)==i)
			printf("%d\t",i);
	}
}
