#include <stdio.h>
void main()
{
	int i=1,i1,i2=0,i3=0,i0=0;
	//i1Ϊÿ�����������i2Ϊ������i3Ϊ������i0Ϊ0�ĸ��� 
	for(;i<=10;i++)
	{
		printf("�������%d����",i); 
		scanf("%d",&i1);
		if(i1>0)
			i2++;
		else if(i1<0)
			i3++;
		else
			i0++;
	}
	printf("������%d����������%d����0�ĸ�����%d��",i2,i3,i0);
}
