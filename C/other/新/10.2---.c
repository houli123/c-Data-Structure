#include <stdio.h>
int main(int argc,char *args[]){
	char c[100];
	FILE *fp=fopen(args[1],"r");
	if(fp==NULL){
		printf("���ļ�ʧ��");
		exit(0);
	}
	fgets(c,100,fp);
	puts(c);
	if(fclose(fp)==NULL)
		printf("��ȡ�ļ��ɹ�");
	return 0;
}
