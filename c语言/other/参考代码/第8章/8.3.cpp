#include "stdio.h"
struct date{
	int iYear,iMonth,iDay; 
};
struct student{
	char cName[8];
	int iEng,iMath,iProg;
	struct date stBirth; 
};
int main()
{
	struct student stOrg={"Tom",80,90,85,1986,11,30},stBak;
	stBak = stOrg;
	printf("����%sӢ��:%d,��ѧ:%d������:%d,����������%d-%d-%d",stBak.cName,stBak.iEng,
	stBak.iMath,stBak.iProg,stBak.stBirth.iYear,stBak.stBirth.iMonth,stBak.stBirth.iDay);
	return 0;
}

