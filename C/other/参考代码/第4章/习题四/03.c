#include <stdio.h>
void main()
{
	int i=1,ii,i1=0,i2=0;float fave,f1,f2;
	printf("������ȫ��������");
	scanf("%d",&ii);
	for(;i<=ii;i++)
	{
		printf("����������ͬѧ�ķ�����");
		scanf("%f%f",&f1,&f2);
		if((f1+f2)/2>=85)
			i1++;
		else if((f1+f2)/2>=60&&(f1+f2)/2<85)
			i2++;
	}
	printf("����ѧ����%d����ͨ��ѧ����%d��",i1,i2);
}
