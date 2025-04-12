#include <stdio.h> 
int main()
{
	int inum;
	printf("请输入一个整数：");
	scanf("%d",&inum);
	if(inum%2==0)
		printf("even");
	else 
		printf("odd");
    return 0;
}
