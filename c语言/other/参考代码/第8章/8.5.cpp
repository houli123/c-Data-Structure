#include "stdio.h"
struct student{
	char cName[8];
	int iMiddle,iFinal;
	float fAve;
};
void fnBest(struct student stS1,struct student stS2)
{
	stS1.fAve=(stS1.iMiddle+stS1.iFinal)/2.0;
	stS2.fAve=(stS2.iMiddle+stS2.iFinal)/2.0;
	if(stS1.fAve>stS2.fAve)
		printf("%s:%d %d %0.1f",stS1.cName,stS1.iMiddle,stS1.iFinal,stS1.fAve);
	else
		printf("%s:%d %d %0.1f",stS2.cName,stS2.iMiddle,stS2.iFinal,stS2.fAve);
}
int main()
{
	struct student stA,stB;
	scanf("%s%d%d",stA.cName,&stA.iMiddle,&stA.iFinal);
	scanf("%s%d%d",stA.cName,&stB.iMiddle,&stB.iFinal);
	fnBest(stA,stB);
	return 0;
}
