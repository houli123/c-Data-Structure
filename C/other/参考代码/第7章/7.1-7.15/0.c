#include <stdio.h> 
int main()
{
	struct S{
		char a:8;
		int b:12;
		int c:5;
		int d:4;
	}s;
	s.a='a';s.b=10;s.c=3;s.d=4;
	printf("a=%c b=%d c=%d d=%d %d",s.a,s.b,s.c,s.d,sizeof(s));
    return 0;
}
