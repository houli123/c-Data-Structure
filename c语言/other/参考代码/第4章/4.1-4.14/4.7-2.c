#include <stdio.h>
int main()
{
	int i=0,isum=0;
	scanf("%d",&i);
	while(i<=10)
	{
		isum+=i;
		i++;
	}
	printf("The sum is %d",isum);
	return 0;
}
