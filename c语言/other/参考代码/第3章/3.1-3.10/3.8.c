#include <stdio.h> 
int main()
{
	float fscore;
	printf("请输入你的分数：");
	scanf("%f",&fscore);
	if((fscore>=90) && (fscore<=100))//'&&'左右两边为真才为真 
		printf("你的等级为A.");
	else if((fscore>=80) && (fscore<90))
		printf("你的等级为B.");
	else if((fscore>=70) && (fscore<80))
		printf("你的等级为C.");
	else if((fscore>=60) && (fscore<70))
		printf("你的等级为D.");
	else if((fscore>=0) && (fscore<60))
		printf("你的等级为E.");
	else
		printf("error!!!");
	return 0;
}
