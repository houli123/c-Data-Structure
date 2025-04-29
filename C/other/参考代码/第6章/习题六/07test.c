#include <stdio.h> 
#define N 100
#include <string.h>
char chh[N];
void fnrev(char ch[]){
	int i=0,k=strlen(ch)-1;
	while(ch[i] != '\0'){
		chh[k]=ch[i];
		i++;k--;
	}
	chh[i]='\0';
}
int main()
{
	char ch[N];
	gets(ch);
	fnrev(ch);
	puts(chh);
    return 0;
}
