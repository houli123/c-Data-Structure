#include <stdio.h>
void main()
{
	char c;int i=0;
	printf("请输入多个字母，以#结束：");
	c=getchar();
	for(;c!='#';i++)
	{
		if((c>='a')&&(c<='x'))
			c+=2;
		else if(c=='y' || c=='z')
			c-=24;
		putchar(c);
		c=getchar();
	}
}
