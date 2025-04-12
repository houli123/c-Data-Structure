#include <stdio.h>
int main()
{
	int i=0,isum=0;
	scanf("%d",&i);
	do
	{
		isum+=i;
		i++;
	}
	while(i<=10);
	printf("The sum is %d",isum);
	return 0;
}
