#include "stdio.h"
int main()
{
	struct student{
		char cName[8];
		int iMiddle,iFinal;
		float fAve;
	};
	struct student stA={"Allice",80,100};
	stA.fAve=(stA.iMiddle+stA.iFinal)/2.0;
	printf("姓名%s,期中%d,期末%d,平均分%f",stA.cName,stA.iMiddle,stA.iFinal,stA.fAve);
	return 0;
 } 
 
