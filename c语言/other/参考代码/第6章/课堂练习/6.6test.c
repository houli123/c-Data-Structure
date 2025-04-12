#include "stdio.h"
int isPrize(int score);
int isPrize(int score)
{
	if(score>=90&&score<=100)
		return 1;
	else if(score>=80&&score<90)
		return 2;
	else if(score>=60&&score<80)
		return 3;
}

void main()
{
	int iStudent[10];
	int i,iLevel;
	for(i=0;i<10;i++)
	{
		scanf("%d",&iStudent[i]);
		iLevel=isPrize(iStudent[i]);
		if(iLevel==1)
			printf("%d号 一等奖 \n",i+1);
		else if(iLevel==2)
			printf("%d号 二等奖 \n",i+1);
		else 
			printf("%d号 没奖\n",i+1);
	}
}
\

