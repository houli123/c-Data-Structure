#include <stdio.h>
#include <string.h>
void main()
{
	char cstr[80],ctemp[80];
	int i;
	gets(ctemp);
	for(i=0;i<4;i++)
	{
		gets(cstr);
		if(strcmp(ctemp,cstr)<0)
			strcpy(ctemp,cstr);
	}
	strcpy(cstr,"�����ַ���Ϊ��");
	strcat(cstr,ctemp);
	puts(cstr);
}
