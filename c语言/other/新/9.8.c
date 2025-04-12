#include <stdio.h> 
#include <string.h>
void fn(char *c1,char *c2){
	strcat(c1,c2);
	for(int i=0;c1[i]!='\0';i++){
		printf("%c",c1[i]);
	}
}
int main(){
	char c1[30],c2[30],pix=c1,piy=c2;
	printf("请分别输入两个字符串：");
	gets(c1);gets(c2);
	fn(c1,c2);
    return 0;
}
