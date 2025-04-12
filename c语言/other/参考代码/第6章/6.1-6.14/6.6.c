#include <stdio.h>
int isLower(char ch);
int isLower(char ch)
{
	if(ch>='a' && ch<='z')
		return 1;
	else
		return 0;
}
void main()
{
	int i,icount=0;
	char chstring[10];
	printf("请输入一个字符串：");
	gets(chstring);
	for(i=0;chstring[i] != '\0';i++)
		icount += isLower(chstring[i]);
	printf("小写字母总数是 %d",icount); 
}
