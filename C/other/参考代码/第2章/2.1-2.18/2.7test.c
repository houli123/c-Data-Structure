#include <stdio.h> 
#define pai 3.1415926
int main()
{
	int ir;float fvol;
	printf("������һ�������뾶��");
	scanf("%d",&ir);
	fvol=4/3*pai*(ir*ir*ir);
	printf("������=%.1f",fvol);
    return 0;
}
