#include <stdio.h>
int main()
{
	float ffee,fsum=0;
	int i=1;
	while(i<=12)
	{
		printf("�����뵱�µ�ú�����ã�\n");
		scanf("%f",&ffee);
		fsum+=ffee;
		i++;
	}
	printf("12����ú���ܷ���Ϊ��%.1f",fsum);
	return 0;
}
