#include "stdio.h"
#include "stdlib.h"
int main()
{
	FILE *fp;
	char chInfo[100];
	fp=fopen("myInfo.txt","r");
	if(fp==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	fgets(chInfo,100,fp);
	printf("%s",chInfo);
	fclose(fp);
	return 0;
}
