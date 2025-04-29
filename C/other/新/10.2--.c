#include <stdio.h>
int main(int argc,char *args[]){
	char c;
	FILE *fp=fopen(args[1],"r");
	if(fp==NULL){
		printf("打开文件失败");
		exit(0);
	}
	while(!feof(fp)){
		c=fgetc(fp);
		putchar(c);
	}
	fclose(fp);
	return 0;
}
