#include <stdio.h>
void main()
{
	int i=1;float fsum;
	for(;!(i%2==1&&i%3==2&&i%5==4);i++);
	printf("����%d��������Ӧ�⳥%.1fԪ",i,i*0.4);
}
