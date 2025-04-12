#include <stdio.h>
long fnfact(int n);
long fnfact(int n)
{
	int i;long ls=1;
	for(i=1;i<=n;i++)
		ls=ls*i;
	return ls;
}
void main()
{
	long lresult;
	lresult=fnfact(10)/(fnfact(10-4)*fnfact(4));
	printf("一共有%ld种方法",lresult); 
}
