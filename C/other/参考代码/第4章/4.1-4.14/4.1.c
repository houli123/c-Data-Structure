#include <stdio.h>
int main()
{
	int i1=1,isum=0;
	while(i1<=10)
	{
		isum+=i1;
		i1++;
	}
	printf("the sum is %d",isum);
	return 0;
}
