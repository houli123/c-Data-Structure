#include <stdio.h>
#include <string.h>
#define N 100
char chh[N];
void fnstr(char ch[])
{
	int i, h=strlen(ch), k=h-1;
	for(i=0;i<h;i++){
		chh[i]=ch[k];
		k--;
	}
	chh[i]='\0';
}
int main()
{
	char ch[N];
	gets(ch);
	fnstr(ch);
	puts(chh);
    return 0;
}
