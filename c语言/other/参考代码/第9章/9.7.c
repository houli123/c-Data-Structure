#include "stdio.h"
void main(){
	char *pStr;
	int iNum=0;
	printf("Pleaes input a string :\n");
	//gets(pStr);
	pStr="aaabbb  ";
	//scanf("%s",pStr);
	while(*(pStr+iNum)!='\0')
	{
		iNum++;
	}
	printf("the length of string is%d\n",iNum);
	getchar(); 
}
