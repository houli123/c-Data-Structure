#include <stdio.h> 
int main()
{
	char ccode;
	printf("ÇëÊäÈëÄãµÄ´úÂë£º");
	scanf("%c",&ccode);
	ccode=ccode & 0xf0;
	printf("%x\n",ccode);
    return 0;
}
