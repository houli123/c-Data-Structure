#include <stdio.h> 
#define N 3   //学生人数
struct date{
	int iyear,imonth,iday;
};
struct person{
	char cname[10],num[15];
	int iscore;
	struct date enrol;
}stu[N];

void fninput(struct person stu[]){
	int i;
	printf("请输入学生信息：姓名、学号、入学年月日、入学成绩：");
	for(i=0;i<N;i++){
		scanf("%s%s%d%d%d%d",stu[i].cname, stu[i].num, &stu[i].enrol.iyear, &stu[i].enrol.imonth, &stu[i].enrol.iday, &stu[i].iscore);
	}
}

void fnouput(struct person stu[]){
	int i;
	for(i=0;i<N;i++){
		printf("第%d位学生是%s，学号是%s，入学时间%d-%d-%d，入学成绩%d\n",i+1,stu[i].cname, stu[i].num, stu[i].enrol.iyear, stu[i].enrol.imonth, stu[i].enrol.iday, stu[i].iscore);
	}
}

int main(){
	fninput(stu);
	fnouput(stu);
    return 0;
}
