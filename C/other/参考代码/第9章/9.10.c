#include "stdio.h"
struct student
{
	char chName[13];
	char chSex;
	int iScore;
 };
 struct student stStu[3] = {{"zhang",'M',100},{"Li",'F',67},{"Wang",'M',91}};
 void main()
 {
 	struct student *pStr=stStu;
 	for(;pStr<stStu+3;pStr++)
 		printf("\n%-10s%2c,%4d",pStr->chName,pStr->chSex,pStr->iScore);
 }
