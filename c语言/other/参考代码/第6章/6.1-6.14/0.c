#include <stdio.h>
#include <string.h>
#define N 10
void main()
{
	char a[]="abcdef", c[]="ghija";
	printf("%d\n",strlen(c));
	//printf("%c\n",a[1]);
	strcpy(c,a);
	
	puts(c);
	printf("%c  %s\n",c[8],a);
	puts(a);
}
