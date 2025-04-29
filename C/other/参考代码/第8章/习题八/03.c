#include <stdio.h> 
#define N 2
int inum=0;
struct student{
	char cname[20],cnum[20],csex[10];
	int iscore[5];
}stu[N];

void fninput(){
	int k,i;
	printf("请按顺序输入学生的学号、姓名、性别和五门功课成绩：\n");
	for(i=0;i<N;i++){
		scanf("%s%s%s%",stu[i].cnum,stu[i].cname,stu[i].csex);
		for(k=0;k<5;k++){
			scanf("%d",&stu[i].iscore[k]);
		}	
	}
}

int fnmin(int i){
	int k,imin;
	imin=stu[i].iscore[0];
	for(k=0;k<5-1;k++){
		if(stu[i].iscore[k]>stu[i].iscore[k+1]){
			imin=stu[i].iscore[k+1];
		}
	}
	return imin;
}

int fnmax(int i){
	int imax,k;
	imax=stu[i].iscore[0];
	for(k=0;k<5-1;k++){
		if(stu[i].iscore[k]<stu[i].iscore[k+1]){
			imax=stu[i].iscore[k+1];
			//printf("666");
		}
	}
	return imax;
}

void fncount(int i){
	//static int inum=0;
	if(stu[i].iscore[0]<60 && stu[i].iscore[1]<60 && stu[i].iscore[2]<60 && stu[i].iscore[3]<60 && stu[i].iscore[4]<60){
		inum++;
	}
}

int main(){
	int i;
	fninput();
	for(i=0;i<N;i++){
		printf("第%d位同学的最低分为：%d,最高分为：%d\n",i+1,fnmin(i),fnmax(i));
		fncount(i);
	}
	printf("每门功课都不及格的学生人数有：%d个\n",inum);
    return 0;
}
