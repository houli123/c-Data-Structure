#include <stdio.h>
int main()
{
	int i1,i2;
	while (1)
	{
		printf("����������������");
		scanf("%d%d",&i1,&i2);
		if((i1+i2)%5==0)
		{
			printf("�����ˣ�лл����");
			break;
		}	
		else
			printf("��Ӯ�ˣ�");
	}
	return 0;
}
