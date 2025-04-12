#include <stdio.h>  //刘杰22190494 
int main()
{
	struct student{
		char cName[10];
		int iMiddle,iFinal;
		float fAve;
	};
	struct student stA={"Alice",80,100};
	stA.fAve =(stA.iMiddle + stA.iFinal) / 2.0;
	printf("学生%s 的期中分数是%d，期末分数是%d，平均分是%.1f",
	stA.cName, stA.iMiddle, stA.iFinal, stA.fAve);
} 
