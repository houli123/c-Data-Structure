#include <stdio.h> //22190494����
#include <stdlib.h>
int main()
{
	FILE *fp;
	char chinfo[80];
	int i;
	fp = fopen("myinfo.txt","w");
	if(fp==NULL)
	{
		printf("���ļ�ʧ��\n");
		exit(0);
	}
	printf("������һ���ַ�����");
	gets(chinfo);
	i=0; 
	while(chinfo[i] != '\0'){
		fputc(chinfo[i],fp);
		i++;
	}
	fclose(fp);
    return 0;
}
