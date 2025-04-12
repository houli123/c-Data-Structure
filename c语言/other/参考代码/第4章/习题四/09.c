#include <stdio.h>
void main()
{
	int i=1;float fsum;
	for(;!(i%2==1&&i%3==2&&i%5==4);i++);
	printf("共有%d个鸡蛋，应赔偿%.1f元",i,i*0.4);
}
