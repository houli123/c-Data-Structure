#include <stdio.h>
int i1=1,i2=2;
int fn1()
{
	static int i1=3;int i2=4;
	i1++;
	static int i3=0;
	
    return i3+=i1+i2;
}

int main()
{
	register int i;
	for(i=0;i<=1;i++){
		printf("%d\n",fn1());
	}
	
	printf("%d %d\n",i1,i2);
	return 0;
}
