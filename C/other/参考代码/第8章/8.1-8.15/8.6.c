#include <stdio.h> 
#define N 3
struct Student{
	int inum,ichinese,imath,ienglish,isum;
	char cname[10];
}stu[N];

void fninput(struct Student stu[]){
	int i;
	printf("请输入学生信息：");
	for(i=0;i<N;i++){
		scanf("%s%d%d%d%d",stu[i].cname, &stu[i].inum, &stu[i].ichinese, &stu[i].imath, &stu[i].ienglish);
		stu[i].isum=stu[i].ichinese + stu[i].imath + stu[i].ienglish;
	}
}

void fnbest(struct Student stu[]){
	int imax=0,i;
	for(i=0;i<N;i++)
		if(stu[imax].isum<stu[i].isum)
			imax=i;
	printf("总分最高的学生是%s，学号是%d，语文%d，数学%d，英语%d，总分%d",stu[imax].cname, stu[imax].inum, stu[imax].ichinese, stu[imax].imath, stu[imax].ienglish, stu[imax].isum);
}

int main(){
	fninput(stu);
	fnbest(stu);
    return 0;
}
