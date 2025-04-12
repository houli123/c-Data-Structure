#include <stdio.h>
int main()
{
	int i=0;
	while(i<10)
	{
		i++;
		if(i%3==0)
		{
			printf("%d  ",i);
			continue;
		}
	}
	return 0;
}
