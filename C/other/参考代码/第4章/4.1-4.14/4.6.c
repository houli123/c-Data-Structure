#include <stdio.h>
int main()
{
	int i1=0,isum=0;
	do
	{
		i1++;
		isum+=i1;
	}
	while (i1<10);
	printf("1+2+3...+10=%d",isum);
	return 0;
}
