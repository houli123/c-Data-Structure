#include <stdio.h>
int main(int argc,char *args[]){
	char c;
	FILE *fp=fopen(args[1],"r");
	if(fp==NULL){
		printf("打开文件失败");
		exit(0);
	}
	c=fgetc(fp);
	while(c!=EOF){
		putchar(c);
		c=fgetc(fp);
	}
	fclose(fp);
	return 0;
}
