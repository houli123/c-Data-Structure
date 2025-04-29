#include "stdio.h"
#define N 3
struct student{
	char iId[15];
	char cName[15];
	int iChinese,iMath,iEnglish;
	int iTotal; 
};
int main()
{
	int i,iMax=0;
	struct student stStu[N]={{"06003","Tom",80,85,80},
	{"06005","Alice",90,80,95},{"06002","Ellen",80,78,59}}; 
	for(i=0;i<N;i++)
	{
		stStu[i].iTotal=stStu[i].iChinese+stStu[i].iMath+stStu[i].iEnglish;
	}
	for(i=0;i<N;i++)
	{
		if(stStu[i].iTotal>stStu[iMax].iTotal)
			iMax=i;
	}
	printf("\n最好成绩的学生信息是：\n");
	printf("学号:%s,姓名:%s 语文：%d  数学：%d  英语：%d  总分：%d",stStu[iMax].iId,stStu[iMax].cName,
	stStu[iMax].iChinese,stStu[iMax].iMath,stStu[iMax].iEnglish,stStu[iMax].iTotal);
	return 0;
} 
