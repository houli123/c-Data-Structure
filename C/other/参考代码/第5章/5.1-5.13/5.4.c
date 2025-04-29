#include <stdio.h>
#define size 10
void main()
{
	int iContest[size]={88,97,91,99,68,85,84,80,77,73},i,ifind;
	printf("请输入一个考分：");
	scanf("%d",&ifind);
	for(i=0;i<size;i++)
		if(iContest[i]==ifind)
			{
				printf("成绩为%d的学生是第%d个学生",ifind,i+1);
				break;
			}
}
