#include <stdio.h>  //����22190494 
int main()
{
	struct student{
		char cName[10];
		int iMiddle,iFinal;
		float fAve;
	};
	struct student stA={"Alice",80,100};
	stA.fAve =(stA.iMiddle + stA.iFinal) / 2.0;
	printf("ѧ��%s �����з�����%d����ĩ������%d��ƽ������%.1f",
	stA.cName, stA.iMiddle, stA.iFinal, stA.fAve);
} 
