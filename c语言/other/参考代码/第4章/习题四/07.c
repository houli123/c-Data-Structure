#include <stdio.h>
void main()
{
	int i=1,isum=0;
	for(;isum<1000;i++)
		isum+=i*i*i;
	printf("���ֵn=%d",i-2);
}
