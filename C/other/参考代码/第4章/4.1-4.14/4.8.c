#include <stdio.h>
int main()
{
	int i, isum=0;
	for(i=1;i<=10;i++)
	{
		isum+=i;
	}
	printf("The sum is %d",isum);
	return 0;
}
