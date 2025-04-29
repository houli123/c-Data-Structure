#include <stdio.h>
int main(){
	char ch[100];
	FILE *fch;
	fch=fopen("10.1.txt","w+");
	if(fch==NULL){
		printf("打开失败");
		exit(0);
	}
	printf("请输入一串字符：");
	gets(ch);
	for(int i=0;ch[i]!='\0';i++){
		fputc(ch[i],fch);
	}
	fclose(fch);
	return 0;
}
