#include <stdio.h>
#include <string.h>
int main(){
	char c[100],ch[100];
	printf("������Ҫ��ȡ���ļ�����");
	gets(c);
	FILE *fp=fopen(c,"r");
	if(fp==NULL){
		printf("���ļ�ʧ��");
		exit(0);
	}
	fgets(ch,strlen(c)+1,fp);
	puts(ch);
}
