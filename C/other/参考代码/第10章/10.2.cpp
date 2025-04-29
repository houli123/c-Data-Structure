#include "stdio.h"
#include "stdlib.h"
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("myInfo.txt","r");
	if(fp==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
}
