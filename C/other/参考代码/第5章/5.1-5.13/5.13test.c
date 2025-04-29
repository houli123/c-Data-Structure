#include <stdio.h> 
#include <string.h>
int main()
{
	char ch[100]="abcd",ch1[100]="z";int i;
	i=strcmp(ch,ch1);
	printf("strlen=%d,strcmp=%d\n",strlen(ch),i);
	strcpy(ch,ch1);
	puts(ch);
	strcat(ch1,"666");
	puts(ch1);
    return 0;
}
