#include <stdio.h>
int fnzhi(int inum)
{
	int i;
	for(i=2;i<inum;i++)
		if(inum%i == 0)
			return 0; //��������
	return 1; //����
}
int main()
{
	int inum;
	printf("������һ��������");
	scanf("%d",&inum);
	if(fnzhi(inum))
		printf("yes");
	else
		printf("no");
	return 0;
}
