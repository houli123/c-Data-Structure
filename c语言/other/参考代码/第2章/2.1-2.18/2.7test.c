#include <stdio.h> 
#define pai 3.1415926
int main()
{
	int ir;float fvol;
	printf("请输入一个整数半径：");
	scanf("%d",&ir);
	fvol=4/3*pai*(ir*ir*ir);
	printf("球的体积=%.1f",fvol);
    return 0;
}
