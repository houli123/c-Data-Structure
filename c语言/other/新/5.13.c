#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char s1[100],s2[100];
	gets(s1);
	for(i=1;i<=2;i++){
		gets(s2);
		if(strcmp(s2,s1)>0){
			strcpy(s1,s2);
		}
	}
	strcat(s1," is the biggest");
	puts(s1);
}
