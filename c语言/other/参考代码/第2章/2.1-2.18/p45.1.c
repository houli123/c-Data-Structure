#include <stdio.h>  //p45 习题二第一小题
int main()//0494刘杰 
{
	char c1 = 'a', c2 = 'Z', c3;
	printf("c1 = %c, c2 = %c\n",c1, c2);  //交换之前输出 
	c3 = c2;
	c2 = c1;
	c1 = c3;
	printf("c1 = %c, c2 = %c",c1, c2);  //交换之后输出 
	getch();
}
