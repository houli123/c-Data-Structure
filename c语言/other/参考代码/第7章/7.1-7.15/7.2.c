#include <stdio.h> 
int main()
{
	char ccode;
	printf("��������Ĵ��룺");
	scanf("%c",&ccode);
	ccode=ccode & 0xf0;
	printf("%x\n",ccode);
    return 0;
}
