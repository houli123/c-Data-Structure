#include "stdio.h"
void fnData_put(int *pInt,int iNum);
void fnData_put(int *pInt,int iNum)
{
	int i;
	for(i=0;i<iNum;i++)
		printf("%4d",*(pInt+i)) ;
} 

void main(){
	int iData[6]={11,21,35,4,5,6};
	int *pInt=iData;
	fnData_put(pInt,6);
}
