#include <stdio.h>
void main()
{
	int i=0;char cparty[30];
	gets(cparty);
	while(cparty[i] != '\0')
		i++;
	printf("��������%d",i);
}
