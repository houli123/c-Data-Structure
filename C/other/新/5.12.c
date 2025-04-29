#include <stdio.h>
#include <string.h>
int main(){
	char c1[30],c2[30];
	printf("请输入习语上：");
	gets(c1);
	printf("请输入习语下：");
	gets(c2);
	strcat(c1,c2);
	puts(c1);
	
}
