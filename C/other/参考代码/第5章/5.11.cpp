#include "stdio.h"
int main()
{
	char cParty[30];
	int i=0;
	gets(cParty);
	while(cParty[i]!='\0')
		i++;
	printf("\n The length of the string is %d",i);
	return 0;
 } 
