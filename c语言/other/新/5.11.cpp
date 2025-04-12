#include <stdio.h>
int main(){
	char cparty[30];
	int i=0;
	gets(cparty);
	while(cparty[i]!='\0'){
		i++;
	}
	printf("\nthe size is %d",i);
	return 0;
}
