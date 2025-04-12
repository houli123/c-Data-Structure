#include <stdio.h> //22190494刘杰
#include <stdlib.h>
int main()
{
	FILE *fp;
	char chinfo[80];
	int i;
	fp = fopen("myinfo.txt","w");
	if(fp==NULL)
	{
		printf("打开文件失败\n");
		exit(0);
	}
	printf("请输入一个字符串：");
	gets(chinfo);
	i=0; 
	while(chinfo[i] != '\0'){
		fputc(chinfo[i],fp);
		i++;
	}
	fclose(fp);
    return 0;
}
