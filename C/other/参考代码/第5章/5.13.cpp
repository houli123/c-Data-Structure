#include "stdio.h" 
#include "string.h"
int main()
{
	char cStr[81],cTemp[81];
	int i;
	gets(cTemp);
	for(i=1;i<5;i++)
	{
		gets(cStr);
		if(strcmp(cTemp,cStr)<0)
			strcpy(cTemp,cStr);
	}
	strcpy(cStr,"The result is:");
	strcat(cStr,cTemp);
	puts(cStr);
	return 0;
}
