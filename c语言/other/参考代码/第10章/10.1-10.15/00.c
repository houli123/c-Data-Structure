#include <stdio.h>
void f(a,b);  //1.
void f(a,b)
{
	printf("%c,%d\n",a,b);
}

void g(int,int);  //2.
void g(a,b)
{
	printf("%d\n",a+b);
}

void h(int a,int);  //3.
void h(a,b)
{
	printf("%d\n",a+b);
}

int main()
{
	int i=89101000;
	printf("%d",i);
	f('Z',2);g(2,4);h(4,8);
	return 0;
}
