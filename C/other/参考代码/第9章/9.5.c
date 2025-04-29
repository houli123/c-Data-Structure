#include "stdio.h"
void main(){
	int iData[6]={0,3,6,9,12,15};
	int *pInt = iData,i;
	for(i=0;i<6;i++)
		printf(i==5?"%d\n":"%d ",iData[i]);
	for(i=0;i<6;i++)
		printf(i==5?"%d\n":"%d ",*(iData+i));
	for(i=0;i<6;i++)
		printf(i==5?"%d\n":"%d ",pInt[i]);
	for(i=0;i<6;i++)
		printf(i==5?"%d\n":"%d ",*pInt++);
} 
