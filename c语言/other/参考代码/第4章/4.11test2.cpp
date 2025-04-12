#include "stdio.h"

int main()
{
	char chChar;
	int i=0;
	chChar=getchar();
	for(i=0;chChar!='#';i++)
	{
		if(chChar>='a'&&chChar<='x')
			chChar=chChar+2;
		else if(chChar>='y'&&chChar<='z')
			chChar=chChar-24;
		putchar(chChar);
		chChar=getchar();
	}
	printf("×Ö·ûÊý %d",i);
	return 0;
}
