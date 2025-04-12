#include <stdio.h>
int main(int argc,char *args[]){
	char c[100];
	FILE *fp=fopen(args[1],"r");
	if(fp==NULL){
		printf("打开文件失败");
		exit(0);
	}
	fgets(c,100,fp);
	puts(c);
	if(fclose(fp)==NULL)
		printf("读取文件成功");
	return 0;
}
