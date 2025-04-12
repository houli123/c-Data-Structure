#include <stdio.h> 
#define N 3  //学生人数
struct Student{
	int inum,ichinese,imath,ienglish,isum;
	char cname[10];
}stu[N],stbest;

void fninput(struct Student stu[]){
	int i;
	printf("请输入学生信息：");
	for(i=0;i<N;i++){
		scanf("%s%d%d%d%d",stu[i].cname, &stu[i].inum, &stu[i].ichinese, &stu[i].imath, &stu[i].ienglish);
		stu[i].isum=stu[i].ichinese + stu[i].imath + stu[i].ienglish;
	}
}

struct Student fnbest(struct Student stu[]){
	int imax=0,i;
	for(i=0;i<N;i++)
		if(stu[imax].isum<stu[i].isum)
			imax=i;
	return stu[imax];
}

int main(){
	fninput(stu);
	stbest=fnbest(stu);
	printf("总分最高的学生是%s，学号是%d，语文%d，数学%d，英语%d，总分%d",stbest.cname, stbest.inum, stbest.ichinese, stbest.imath, stbest.ienglish, stbest.isum);
    return 0;
}
