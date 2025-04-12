#include <stdio.h>
void main()
{
	int i;  //i为鸡的个数，鸡有两只脚，兔子有四只脚 
	for (i=1;i<=35;i++)
		if(i*2+4*(35-i)==94)
			printf("鸡有%d只，兔子有%d只",i,35-i);
}
