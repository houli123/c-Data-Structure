#include <stdio.h> 
int main()
{
	float fscore;
	printf("��������ķ�����");
	scanf("%f",&fscore);
	if((fscore>=90) && (fscore<=100))//'&&'��������Ϊ���Ϊ�� 
		printf("��ĵȼ�ΪA.");
	else if((fscore>=80) && (fscore<90))
		printf("��ĵȼ�ΪB.");
	else if((fscore>=70) && (fscore<80))
		printf("��ĵȼ�ΪC.");
	else if((fscore>=60) && (fscore<70))
		printf("��ĵȼ�ΪD.");
	else if((fscore>=0) && (fscore<60))
		printf("��ĵȼ�ΪE.");
	else
		printf("error!!!");
	return 0;
}
