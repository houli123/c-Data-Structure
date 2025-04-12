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
void fnDisp(struct student stStud[],int n);

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
void fnDisp(struct student stStud[],int n)
{
	int i=0,iMax=0;
	for(i=1;i<n;i++)
		if(stStud[i].iTotal>stStud[iMax].iTotal)
			iMax=i;
	printf("\n The best student's information:\n");
	printf("%s,%s,%d,%d,%d,%d",stStud[iMax].cNo,stStud[iMax].cName,
	stStud[iMax].iChinese,stStud[iMax].iMath,stStud[iMax].iEnglish,stStud[iMax].iTotal);
}
int main()
{
	struct student stPerson[N];
	fnInput(stPerson,N);
	fnDisp(stPerson,N);
	return 0;
}
