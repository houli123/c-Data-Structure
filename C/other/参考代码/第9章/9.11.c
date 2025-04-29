#include "string.h"
#include "stdio.h"
struct person
{
	char chName[15];
	int iCount;
};
void fnCount(struct person *pStr)
{
	int i,j;
	char chName[15];
	printf("\n Input name \n");
	for(i=1;i<=10;i++)
	{
		scanf("%s",chName);
		for(j=0;j<4;j++)
		if(strcmp(chName,(pStr+j)->chName)==0)
			(pStr+j)->iCount++;
	}
}
void fnData_put(struct person *pStr)
{
	int j;
	printf("\n result:");
	for(j=0;j<4;j++)
		printf("\n%s=%d",(pStr+j)->chName,(pStr+j)->iCount);
}
void main()
{
	struct person stLeader[4]={{"Li",0},{"Wang",0},{"Zhang",0},{"Shen",0}};
	fnCount(stLeader);
	fnData_put(stLeader);
}
