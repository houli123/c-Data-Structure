#include <stdio.h> //22190494刘杰
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("myinfo.txt","r");
	if(fp == NULL){
		printf("无法打开");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
    return 0;
}
