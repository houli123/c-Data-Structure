#include <stdio.h>
struct student{
	char cname[10],csex[4];
	float fscore;
};
int main()
{
	printf("��ֱ�����ѧ���������Ա�ͳɼ���");	
	struct student stu={},*pstu=&stu;
	scanf("%s%s%f",&stu.cname,&stu.csex,&stu.fscore);
	printf("%s,%s,%.1f",pstu->cname,pstu->csex,(*pstu).fscore);
}
