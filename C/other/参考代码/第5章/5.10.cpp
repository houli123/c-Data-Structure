#include "stdio.h"
int main()
{
	char cString[30];
	int i;
	for(i=0;i<7;i++)
		scanf("%c",&cString[i]);
	for(i=0;i<7;i++)
		printf("%c",cString[i]);
	return 0;
}
