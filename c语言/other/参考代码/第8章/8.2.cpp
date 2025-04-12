#include "stdio.h"
int main()
{
	struct student{
		char cName[8];
		int iMiddle,iFinal;
		float fAve;
	}stA,stB;
	scanf("%s%d%d",stA.cName,&stA.iMiddle,&stA.iFinal);
	scanf("%s%d%d",stB.cName,&stB.iMiddle,&stB.iFinal);
	stA.fAve=(stA.iMiddle+stA.iFinal)/2.0;
	stB.fAve=(stB.iMiddle+stB.iFinal)/2.0;
	if(stA.fAve>stB.fAve)
		printf("%s：期中%d期末%d%平均分%0.1f",stA.cName,stA.iMiddle,stA.iFinal,stA.fAve);
	else
		printf("%s：期中%d期末%d%平均分%0.1f",stB.cName,stB.iMiddle,stB.iFinal,stB.fAve);
	return 0;
}
