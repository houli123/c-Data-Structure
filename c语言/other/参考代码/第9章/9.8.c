#include "stdio.h"
void fnMystrcat(char *pStr1,char *pStr2);
void fnMystrcat(char *pStr1,char *pStr2){
	int i=0,j=0;
	while(pStr1[i]!='\0')
		i++;
	while(pStr2[j]!='\0')
	{
		pStr1[i]=pStr2[j];
		i++;
		j++;
	}
	pStr1[i]='\0';
}

void main()
{
	char chSource[80]="String One",chObject[20]="string two";
	fnMystrcat(chSource,chObject);
	printf("str1+str2=%s",chSource);
}
