#include <stdio.h>
#include <string.h>
int main(){
	char c[100],ch[100];
	printf("请输入要读取的文件名：");
	gets(c);
	FILE *fp=fopen(c,"r");
	if(fp==NULL){
		printf("打开文件失败");
		exit(0);
	}
	fgets(ch,strlen(c)+1,fp);
	puts(ch);
}
