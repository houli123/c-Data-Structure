#include "stdio.h"
#include "stdlib.h" 
int main()
{
	FILE *fp;
	char chInfo[20];
	int i;
	fp=fopen("myInfo.txt","w");
	if(fp==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	printf("Please input a string:");
	gets(chInfo);
	i=0;
	fputs(chInfo,fp);
	fclose(fp);
	return 0;
}
