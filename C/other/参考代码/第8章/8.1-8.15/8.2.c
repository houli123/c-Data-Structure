#include <stdio.h>  //刘杰22190494 
void main()
{
	struct student{
		char cName[8];
		int iMiddle,iFinal;
		float fAve;} stA,stB; 
	printf("请输入两位同学的姓名，期中和期末分数\n");
	scanf("%s%d%d",stA.cName,&stA.iMiddle,&stA.iFinal);
	scanf("%s%d%d",stB.cName,&stB.iMiddle,&stB.iFinal);
	stA.fAve = (stA.iMiddle + stA.iFinal) / 2.0;
	stB.fAve = (stB.iMiddle + stB.iFinal) / 2.0;
	if (stA.fAve > stB.fAve)
		printf("平均分较高的是%s,期中成绩为%d,期末成绩为%d,平均分为%.1f",
		stA.cName, stA.iMiddle, stA.iFinal, stA.fAve);
	else
		printf("平均分较高的是%s,期中成绩为%d,期末成绩为%d,平均分为%.1f",
		stB.cName, stB.iMiddle, stB.iFinal, stB.fAve);
} 
