#include <stdio.h>
int main()
{
	float ffee,fsum=0;
	int i=1;
	while(i<=12)
	{
		printf("请输入当月的煤气费用：\n");
		scanf("%f",&ffee);
		fsum+=ffee;
		i++;
	}
	printf("12个月煤气总费用为：%.1f",fsum);
	return 0;
}
