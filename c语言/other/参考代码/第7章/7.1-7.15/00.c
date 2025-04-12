#include <stdio.h> 
int main()
{
	struct my_data2{
		int a:4;
		int b:4;
		int  :0;
		int c:2;
	}stData2;
	printf("%d",sizeof(stData2));
    return 0;
}
