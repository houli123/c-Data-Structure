#include <stdio.h>
int main(){
	char ch[100];int c;
	FILE *fch;
	fch=fopen("D:\\1.txt","w+");
	if(fch==NULL){
		printf("打开失败");
		exit(0);
	}
	printf("请输入一串字符：");
	gets(ch);
	c=fputs(ch,fch);
	if(c!=0)
		printf("%s写入失败",ch);
	fclose(fch);
	return 0;
}
