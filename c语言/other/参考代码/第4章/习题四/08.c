#include <stdio.h>
#include <time.h>  //����ʱ��� 
void main()
{
	int i,ii,i1=0,i2=100; 
	srand((unsigned)time(NULL));  //ʱ��⺯�� 
	//������������ӣ���ֹÿ�����ɵ������һ�� 
	ii=rand()%100+1;//��������� 
	for(;!(i==ii);)
	{
		printf("���һ��%d-%d��������",i1,i2);
		scanf("%d",&i);
		if(ii<i)
		{printf("�������ˣ�\n");i2=i;}
		else if(ii>i)
		{printf("����С��!\n");i1=i;}
	}
	printf("��¶�������");
		
}
