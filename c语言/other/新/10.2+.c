#include <stdio.h>
int main(int i,char *ch[]){
	char ch1[100];
	FILE *fp1=fopen(ch[1],"r"),*fp2=fopen(ch[2],"w");
	if(fp1==0 || fp2==0){
		printf("打开文件出错");
		exit(0);
	}
	fgets(ch1,100,fp1);
	fputs(ch1,fp2);
	if((fclose(fp1)+fclose(fp2))==0){
		printf("文件复制成功");
	}
}
