#include <stdio.h>
#include <string.h>
int main(){
	char c1[30],c2[30];
	printf("������ϰ���ϣ�");
	gets(c1);
	printf("������ϰ���£�");
	gets(c2);
	strcat(c1,c2);
	puts(c1);
	
}
