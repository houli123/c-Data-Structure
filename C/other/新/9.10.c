#include <stdio.h>
struct student{
	char cname[10],csex[4];
	float fscore;
};
int main()
{
	struct student stu[]={"liujie","nan",100,"jiejie","nv",20},*pstu=&stu;
	for(int i=0;i<2;i++){
		printf("%s,%s,%.1f\n",(pstu+i)->cname,(pstu+i),(*(pstu+i)).fscore);
	}
	
}
