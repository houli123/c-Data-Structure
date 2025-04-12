#include <stdio.h>
#include <string.h>
#define N 100
void fnstr(char c1[],char c2[])
{
	strcat(c1,c2);
	printf("%s",c1);
}
int main()
{
	char c1[N], c2[N];
	printf("请分别输入两个字符串：");
	gets(c1);
	gets(c2);
	fnstr(c1,c2);
    return 0;
}
