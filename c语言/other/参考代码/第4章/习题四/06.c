#include <stdio.h> 
void main()
{
	int i=0;char c;
	c=' ';
	for (;i<=255;i++)
	{
		printf("%c\t",c-32);
		c++;
	}
}
