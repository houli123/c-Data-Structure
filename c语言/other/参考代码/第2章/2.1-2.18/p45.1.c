#include <stdio.h>  //p45 ϰ�����һС��
int main()//0494���� 
{
	char c1 = 'a', c2 = 'Z', c3;
	printf("c1 = %c, c2 = %c\n",c1, c2);  //����֮ǰ��� 
	c3 = c2;
	c2 = c1;
	c1 = c3;
	printf("c1 = %c, c2 = %c",c1, c2);  //����֮����� 
	getch();
}
