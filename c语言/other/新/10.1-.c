#include <stdio.h>
int main(){
	char ch[100];int c;
	FILE *fch;
	fch=fopen("D:\\1.txt","w+");
	if(fch==NULL){
		printf("��ʧ��");
		exit(0);
	}
	printf("������һ���ַ���");
	gets(ch);
	c=fputs(ch,fch);
	if(c!=0)
		printf("%sд��ʧ��",ch);
	fclose(fch);
	return 0;
}
