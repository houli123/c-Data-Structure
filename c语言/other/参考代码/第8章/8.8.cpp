#include "stdio.h"
#define N 3
struct date{
	int iYear,iMonth,iDay;
};
struct person{
	char cNo[15];
	char cName[15];
	struct date stEnrol;
	int iScore;
};
void fnDataIn(struct person stStud[],int n);
void fnDataOut(struct person stStud[],int n);

void fnDataIn(struct person stStud[],int n)
{
	int i;
	printf("please input students' information:No,Name,Enroldate(year,month,day),score \n");
	for(i=0;i<n;i++)
	scanf("%s%s%d%d%d%d",stStud[i].cNo,stStud[i].cName,&stStud[i].stEnrol.iYear,&stStud[i].stEnrol.iMonth,
	&stStud[i].stEnrol.iDay,&stStud[i].iScore);
}
void fnDataOut(struct person stStud[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\n%s %s %d-%d-%d %d",stStud[i].cNo,stStud[i].cName,stStud[i].stEnrol.iYear,stStud[i].stEnrol.iMonth,
	stStud[i].stEnrol.iDay,stStud[i].iScore );
}
int main()
{
	struct person stNew[N];
	fnDataIn(stNew,N);
	fnDataOut(stNew,N);
	return 0;
}
