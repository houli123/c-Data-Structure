#include "stdio.h"
struct student{
	char chName[13];
	char chSex;
	int iScore;
};

struct student stStu1={"zhang san",'M',85
};
void main(void)
{
	struct student *pStr;
	pStr=&stStu1;
	printf("\n Name=%s,Sex=%c,Score=%d",pStr->chName,pStr->chSex,pStr->iScore);
}
