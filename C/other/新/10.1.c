#include <stdio.h>
int main(){
	char ch[100];
	FILE *fch;
	fch=fopen("10.1.txt","w+");
	if(fch==NULL){
		printf("��ʧ��");
		exit(0);
	}
	printf("������һ���ַ���");
	gets(ch);
	for(int i=0;ch[i]!='\0';i++){
		fputc(ch[i],fch);
	}
	fclose(fch);
	return 0;
}
