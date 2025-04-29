#include <stdio.h> 
int main()
{
	//按位取反
	printf("%d\n",~024);
	//按位与
	printf("%d\n",3&5);
	//按位或
	printf("%d\n",3|-5);
	//按位异或
	printf("%d\n",3^5);
	//按位左移
	printf("%d\n",1<<1);
	//按位右移
	printf("%d\n",8>>1);
    return 0;
}
