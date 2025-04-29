#include <stdio.h>
int main()
{
	int n=0,isum=0;
	while(isum<1000)
	{
		n++;
		isum+=n*n;
	}
	printf("n=%d",n-1);
	return 0;
}
