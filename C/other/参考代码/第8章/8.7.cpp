#include "stdio.h"
#define N 3
struct student
{
	char cNo[15];
	char cName[15];
	int iChinese,iMath,iEnglish;
	int iTotal;
};
void fnInput(struct student stStud[],int n);
struct student fnCalculate(struct student stStud[],int n);

void fnInput(struct student stStud[],int n)
{
	int i;
	printf("please input three students' information \n");
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%d%d",stStud[i].cNo,stStud[i].cName,&stStud[i].iChinese,
		&stStud[i].iMath,&stStud[i].iEnglish);
		stStud[i].iTotal=stStud[i].iChinese+stStud[i].iMath+stStud[i].iEnglish;
	}
}
struct student fnCalculate(struct student stStud[],int n)
{
	int i=0,iMax=0;
	for(i=1;i<n;i++)
		if(stStud[i].iTotal>stStud[iMax].iTotal)
			iMax=i;
	return stStud[iMax];		
	

}
int main()
{
	struct student stPerson[N],stBest;
	fnInput(stPerson,N);
	stBest=fnCalculate(stPerson,N);
	printf("\n The best student's information:\n");
	printf("%s,%s,%d,%d,%d,%d",stBest.cNo,stBest.cName,stBest.iChinese,stBest.iMath,stBest.iEnglish,stBest.iTotal);
	return 0;
}
