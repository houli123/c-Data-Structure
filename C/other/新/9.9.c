#include <stdio.h>
struct student{
	char cname[10],csex[4];
	float fscore;
};
int main()
{
	printf("请分别输入学生姓名，性别和成绩：");	
	struct student stu={},*pstu=&stu;
	scanf("%s%s%f",&stu.cname,&stu.csex,&stu.fscore);
	printf("%s,%s,%.1f",pstu->cname,pstu->csex,(*pstu).fscore);
}
