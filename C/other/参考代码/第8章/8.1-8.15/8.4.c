#include <stdio.h> 
#define N 3
struct Student{
	int inum,ichinese,imath,ienglish,isum;
	char cname[10];
}stu[N]={{1,10,20,30,0,"Tom"},{2,100,200,300,0,"Alice"},{3,1000,2000,3000,0,"Jack"}};
int main(){
	int i,imax=0;
	for(i=0;i<N;i++)
		stu[i].isum=stu[i].ichinese + stu[i].imath + stu[i].ienglish;
	for(i=0;i<N;i++)
		if(stu[imax].isum<stu[i].isum)
			imax=i;
	printf("总分最高的学生是%s，学号是%d，语文%d，数学%d，英语%d，总分%d",stu[imax].cname, stu[imax].inum, stu[imax].ichinese, stu[imax].imath, stu[imax].ienglish, stu[imax].isum);
    return 0;
}
