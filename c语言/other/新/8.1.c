#include <stdio.h>
struct iscore{
	char cname;
	int iscore;
}score={'c',3};
int main()
{
	printf("%c,%d",score.cname,score.iscore);
}
