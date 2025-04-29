#include <stdio.h>  //p28 2.5
int main()  //0494刘杰 
{
	char c1;  //定义字符 
	printf("请输入一个小写字母");
	c1 = getchar();
	c1 = c1 - 32;
	putchar(c1);
	getch();
}
