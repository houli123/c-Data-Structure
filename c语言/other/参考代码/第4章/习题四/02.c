#include <stdio.h>
void main()
{
	int i=5;
	for(;i<=100;i++)
		if(i%5==0||i%7==0)
			printf("%d  ",i);
}
