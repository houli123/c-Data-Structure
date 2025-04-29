#include <stdio.h>
void main()
{
	int i;char cString[30];
	for(i=0;i<7;i++)
	{
		scanf("%c",&cString[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("%c",cString[i]);
	}
}
